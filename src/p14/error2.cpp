/**
  ******************************************************************************
  * @file           : error2.cpp
  * @author         : b-zhushiyun
  * @brief          : Error handling - Solution 2:Tell the caller by the return value when error occurs
  * @attention      : We have to use the 3rd parameter to send the result.
  * @date           : 23-10-19
  ******************************************************************************
  */
#include "iostream"
#include "math.h"
#include "cfloat"

bool ratio(float a, float b, float &c){
    if (fabs(a + b) < FLT_EPSILON){
        std::cerr << "Error..." << std::endl;
        return false;
    }
    c = (a - b) / (a + b);
    return true;
}

