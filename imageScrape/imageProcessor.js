var express = require('express'); // web server application
var app = express(); // webapp
var http = require('http');
var server = http.Server(app); // connects http library to server
var io = require('socket.io')(http); // connect websocket library to server
var serverPort = 8000;

var SerialPort = require('serialport'); // serial library
var Readline = SerialPort.parsers.Readline; // read serial data as lines

// Image processing
//const sharp = require("sharp");
const fs = require('fs');
const imageDownload = require('image-download');
const imageType = require('image-type');
//const del = require('del');
const imageToRgbaMatrix = require('image-to-rgba-matrix');
const resizeImg = require('resize-img');

// use express to create the simple webapp
app.use(express.static('public')); // find pages in public directory

// check to make sure that the user provides the serial port for the Arduino
// when running the server
if (!process.argv[2]) {
  console.error('Usage: node ' + process.argv[1] + ' SERIAL_PORT');
  process.exit(1);
}

// start the server and say what port it is on
server.listen(serverPort, function() {
  console.log('listening on *:%s', serverPort);
  processImages();
});

//---------------------- SERIAL COMMUNICATION (Arduino) ----------------------//
// start the serial port connection and read on newlines
const serial = new SerialPort(process.argv[2], {});
const parser = new Readline({
  delimiter: '\r\n'
});

// Read data that is available on the serial port and send it to the websocket
serial.pipe(parser);
parser.on('data', function(data) {
  console.log('Data:', data);
  io.emit('server-msg', data);
});
//----------------------------------------------------------------------------//


// Image processing
/*let imageArray = ["https://s3.amazonaws.com/pix.iemoji.com/images/emoji/apple/ios-11/256/water-wave.png",
"https://image.flaticon.com/icons/png/128/234/234794.png",
"https://d1nhio0ox7pgb.cloudfront.net/_img/g_collection_png/standard/256x256/water.png"];*/
let imageArray = ["https://s3.amazonaws.com/pix.iemoji.com/images/emoji/apple/ios-11/256/water-wave.png"];

function processImages() {
  for (var i = 0; i < imageArray.length; i++) {
    var imageCount = 0;

    // Download image from link
    imageDownload(imageArray[i]).then(buffer => {
      console.log(imageCount);
      var filename = 'output' + imageCount;
      fs.writeFile("public/img/" + filename + ".png", buffer, (err) => {
        if (err) {
          console.log(err);
        } else {
          console.log('saved image');
          resizeImage(filename);
        }
      })
      imageCount += 1;
    })
  }
}

// Resize image to 32x32
function resizeImage(filename) {
  resizeImg(fs.readFileSync("public/img/" + filename + ".png"), {width: 32, height: 32}).then(buf => {
    fs.writeFileSync('public/img/' + filename + '.png', buf);
    imageToRgbaMatrix('public/img/' + filename + '.png').then(function(data) {
      //serial.write(data);
      console.log(data[0]);
    });
  });
}
