# -*- coding: utf-8 -*-
"""
image.py

Converts an image into matrix.drawPixel commands for a 32x32 LED display
"""

from skimage import io, transform

image = io.imread("q.png")

image = transform.resize(image, [32,32])
io.imsave("q-sm.png", image) #uncomment to save 32x32 img

print image[0][0]
f = open("matrix.txt", "w")

for i in range(32):
    for j in range(32):
        px = image[i][j]
        if (px[3] == 0):
            px = ["0", "0", "0"] #transparent = black
        else:
            px = [str(int(px[k]*7)) for k in range(3)] #scale colors to 0-7
        colorString = "matrix.Color333(" + ",".join(px) + ")"
        f.write("matrix.drawPixel(" + str(i) + "," + str(j) + "," + colorString + ");\n")

f.close()
        