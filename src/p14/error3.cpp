/**
  ******************************************************************************
  * @file           : error3.cpp
  * @author         : b-zhushiyun
  * @brief          : Error handling: Solution 3: Throw exceptions(C++ feature)
  * @attention      : None
  * @date           : 23-10-19
  ******************************************************************************
  */
#include "iostream"
#include "math.h"
#include "cfloat"
float ratio(float a, float b){
    if (fabs(a + b) < FLT_EPSILON)
        throw "Error: The sum of the two arguments is close to zero.";
    return (a - b) / (a + b);
}

int main() {
    float a, b, result;
    while (std::cin >> a, std::cin >> b){
        std::cout << "Input float a and float b:" << std::endl;
        result = ratio(a, b);
        std::cout << "The result is: " << result << std::endl;
    }

    return 0;
}