/**
  ******************************************************************************
  * @file           : error1.cpp
  * @author         : b-zhushiyun
  * @brief          : error handling - Solution 1
  * @attention      : Kill the program when error occurs. - Not a good solution!
  * @date           : 23-10-19
  ******************************************************************************
  */
#include "iostream"
#include "math.h"
#include "cfloat"

float ratio(float a, float b){
    if (fabs(a + b) < FLT_EPSILON){ // fabs()： FLT_EPSILON：
        std::cerr << "Error ..." << std::endl;
        std::abort();
    }
    return (a - b) / (a + b);
}