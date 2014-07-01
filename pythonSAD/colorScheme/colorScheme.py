# This script shows the color scheme that is used for the 16 points of disparity

import sys
from PIL import Image
import numpy

im = Image.new("RGB", (32,2), "black")
print(im.format, im.size, im.mode)

colorScheme = numpy.array([(0x00, 0x00, 0x8F), \
                           (0x00, 0x0F, 0xFF), \
                           (0x00, 0x8F, 0xFF), \
                           (0x00, 0xCF, 0xFF), \
                           (0x0F, 0xFF, 0xEF), \
                           (0x4F, 0xFF, 0xAF), \
                           (0x8F, 0xFF, 0x6F), \
                           (0xCF, 0xFF, 0x2F), \
                           (0xFF, 0xEF, 0x00), \
                           (0xFF, 0xAF, 0x00), \
                           (0xFF, 0x9F, 0x00), \
                           (0xFF, 0x6F, 0x00), \
                           (0xFF, 0x2F, 0x00), \
                           (0xEF, 0x00, 0x00), \
                           (0xAF, 0x00, 0x00), \
                           (0x7F, 0x00, 0x00)])

for i in range(32):
    for j in range(2):
        im.putpixel((i,j), (colorScheme[15-int(i/2)][0], colorScheme[15-int(i/2)][1], colorScheme[15-int(i/2)][2]))

'''for i in range(16):
    for j in range(1):
        im.putpixel((i,j), (colorScheme[15-i][0], colorScheme[15-i][1], colorScheme[15-i][2]))'''

im.save("colorScheme.png")
#im.show()
















