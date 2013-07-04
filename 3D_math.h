/* ============================================
I2Cdev device library code is placed under the MIT license
Copyright (c) 2012 Jeff Rowberg

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
===============================================
*/

#ifndef _3D_MATH_H_
#define _3D_MATH_H_

#include <Arduino.h>

class Quaternion {
  public:
    float w;
    float x;
    float y;
    float z;

    Quaternion();
    Quaternion(float nw, float nx, float ny, float nz);

    Quaternion getProduct(Quaternion q);
    Quaternion getConjugate();
    Quaternion getNormalized();
    float getMagnitude();
    void normalize();
};

class VectorInt16 {
  public:
    int16_t x;
    int16_t y;
    int16_t z;

    VectorInt16();
    VectorInt16(int16_t nx, int16_t ny, int16_t nz);

    float getMagnitude();
    VectorInt16 getNormalized();
    VectorInt16 getRotated(Quaternion *q);
    void normalize();
    void rotate(Quaternion *q);
};

class VectorFloat {
  public:
    float x;
    float y;
    float z;

    VectorFloat();
    VectorFloat(float nx, float ny, float nz);

    float getMagnitude();
    VectorFloat getNormalized();
    VectorFloat getRotated(Quaternion *q);
    void normalize();
    void rotate(Quaternion *q);
};

#endif
