/**
  ******************************************************************************
  * @file           : mathlib_test.cpp
  * @author         : b-zhushiyun
  * @brief          : 测试《Linux C++》第五章
  *                     数学库
  *                          头文件:math.h/cmath
  *                          库文件:libm
  *                          链接方式:g++ -lm main.cpp
  * @attention      : None
  * @date           : 23-9-28
  ******************************************************************************
  */

#include "cmath"
#include "iostream"
#define PI 3.14159265

int main() {

    double param, result;
    param = 60.0;
    result = cos ( param * PI / 180.0 );

    printf ("The cosine of %f degrees is %f.\n", param, result );

    return 0;
}