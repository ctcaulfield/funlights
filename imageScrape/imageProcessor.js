var express = require('express'); // web server application
var app = express(); // webapp
var http = require('http');
var server = http.Server(app); // connects http library to server
var io = require('socket.io')(http); // connect websocket library to server
var serverPort = 8000;

// Image processing
const sharp = require("sharp");
const fs = require('fs');
const imageDownload = require('image-download');
const imageType = require('image-type');
const del = require('del');

// use express to create the simple webapp
app.use(express.static('public')); // find pages in public directory

// start the server and say what port it is on
server.listen(serverPort, function() {
  console.log('listening on *:%s', serverPort);
  processImages();
});

// Image processing
let imageArray = ["https://s3.amazonaws.com/pix.iemoji.com/images/emoji/apple/ios-11/256/water-wave.png",
"https://image.flaticon.com/icons/png/128/234/234794.png",
"https://d1nhio0ox7pgb.cloudfront.net/_img/g_collection_png/standard/256x256/water.png"];

function processImages() {
  for (var i = 0; i < imageArray.length; i++) {
    var imageCount = 0;

    // Download image from link
    imageDownload(imageArray[i]).then(buffer => {
      console.log(imageCount);
      var filename = 'output' + imageCount + '.png';
      fs.writeFile(filename, buffer, (err) => {
        if (err) {
          console.log(err);
        } else {
          console.log('saved image');
          resizeImage(filename);
          imageCount += 1;
        }
      })
    })
  }
}

// Resize image to 32x32
function resizeImage(filename) {
  sharp(filename).resize(32,32).toBuffer(function(err, buffer) {
    fs.writeFile('public/img/' + filename, buffer, (err) => {
      if (err) {
        console.log(err);
      } else {
        console.log('resized image');
      }
    })
  })
}
