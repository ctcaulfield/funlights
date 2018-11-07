'use strict';

let https = require('https');

//subscription key via Azure
let subscriptionKey = '501acff16f424807aac095d5be1522d6';

let host = 'api.cognitive.microsoft.com';
let path = '/bing/v7.0/images/search';
let perfectMatch = [];
let almostMatch = [];
let finalImageCollection = [];

//this will be the Google Vision Term
let term = 'bottle';

let response_handler = function (response) {
    let body = '';
    response.on('data', function (d) {
        body += d;
    });
    response.on('end', function () {
        let imageResults = JSON.parse(body);
        //console.log(imageResults);
        if (imageResults.value.length > 0) {
          for(var i=0; i < imageResults.value.length; i++){
            let width = imageResults.value[i].width;
            let height = imageResults.value[i].height;
            var num = width;
            var den = height;

            //ensure the numerator is greater than the denominator
            if(width < height){
              num = height;
              den = width;
            }

            //check if the width and height is a square
            if(width == height){
              perfectMatch.push(imageResults.value[i]);
            }
            //this collects squares that are almost a match
            else if(num/den <= 1.10){
              almostMatch.push(imageResults.value[i]);
            }
          //end of loop
          }
          //greater than 5
          if(perfectMatch.length > 5){
            finalImageCollection = perfectMatch.sort(function(a, b){
              return a.height-b.height
            })
            finalImageCollection = finalImageCollection.slice(0, 5);
          }
          //less than 5
          else if(perfectMatch.length < 5){
            finalImageCollection = perfectMatch.sort(function(a, b){
              return a.height-b.height
            })

            //TODO - sort other array and append up until finalImageCollection = 5

          }
          //5 total images
          else{
            finalImageCollection = perfectMatch.sort(function(a, b){
              return a.height-b.height
            })
          }

          //   // let firstImageResult = imageResults.value[0];
            // console.log(`Image result count: ${imageResults.value.length}`);
            // console.log(`First image insightsToken: ${firstImageResult.imageInsightsToken}`);
            // console.log(`First image thumbnail url: ${firstImageResult.thumbnailUrl}`);
            // console.log(`First image web search url: ${firstImageResult.webSearchUrl}`);
        }
        else {
            console.log("Couldn't find image results!");
        }

    });
    response.on('error', function (e) {
        console.log('Error: ' + e.message);
    });
};

let bing_image_search = function (search) {
  console.log('Searching images for: ' + term);
  let request_params = {
        method : 'GET',
        hostname : host,
        path : path + '?q=' + encodeURIComponent(search)+"&imageType=Clipart&size=small",
        headers : {
            'Ocp-Apim-Subscription-Key' : subscriptionKey,
        }
    };

    let req = https.request(request_params, response_handler);
    req.end();
}

if (subscriptionKey.length === 32) {
    bing_image_search(term);
} else {
    console.log('Invalid Bing Search API subscription key!');
    console.log('Please paste yours into the source code.');
}
