/**
  ******************************************************************************
  * @file           : error3.cpp
  * @author         : b-zhushiyun
  * @brief          : Error handling: Solution 3: Throw exceptions(C++ feature)
  * @attention      :
  * @date           : 23-10-19
  ******************************************************************************
  */
#include "iostream"
#include "cmath"
#include "cfloat"
float ratio(float a, float b){
    if (fabs(a + b) < FLT_EPSILON)
        throw "Error: The sum of the two arguments is close to zero.";
    return (a - b) / (a + b);
}

int main() {
    float a, b, result;

    std::cout << "Please input two numbers: <'q' to quit> " << std::endl;
    while (std::cin >> a, std::cin >> b){
        {
            try {
                result = ratio(a, b);
                std::cout << a << ", " << b << ": " << result << std::endl;
            }
            catch (const char *msg) {
                std::cout << "Call ratio() failed." << std::endl;
                std::cout << "I will give you another chance." << std::endl;
            }
        }
        std::cout << "Please input two numbers: <'q' to quit> " << std::endl;
    }
    std::cout << "Bye!" << std::endl;
    return 0;
}