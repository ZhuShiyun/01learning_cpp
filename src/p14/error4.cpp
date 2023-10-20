/**
  ******************************************************************************
  * @file           : error4.cpp
  * @author         : b-zhushiyun
  * @brief          : A try block can be followed by multiple catch blocks.
  * @attention      : None
  * @date           : 23-10-20
  ******************************************************************************
  */
#include <iostream>
#include <cstdlib>
#include <cfloat>
#include <cmath>

float ratio(float a, float b){
    if (a < 0)
        throw 1;
    if (b < 0)
        throw 2;
    if (fabs(a + b) < FLT_EPSILON)
        throw "The sum of the two arguments is close to zero.";
    return (a - b) / (a + b);
}

int main() {
    float a = 0.0f;
    float b = 0.0f;
    float result = 0.0f;

    std::cout << "Please input two numbers <q to quit>:" << std::endl;
    while (std::cin >> a >> b) {

            try {
                result = ratio(a, b);
                std::cout << "ration(" << a << ", " << b << ") = " << result << std::endl;
            }
            catch (const char *msg) {
                std::cerr << "Call ratio() failed: " << msg << std::endl;
                std::cerr << "I will give you another chance. " << std::endl;
            }
            catch (int error_id) {
                if (error_id == 1)
                    std::cerr << "Call ratio() failed: the 1st argument should be positive." << std::endl;
                else if (error_id == 2)
                    std::cerr << "Call ratio() failed: the 2rd argument should be positive." << std::endl;
                else
                    std::cerr << "Call ratio() failed: unrecognized error code." << std::endl;
                std::cerr << "I will give you another chance. " << std::endl;
            }
            std::cout << "Please input two numbers <q to quit>:" << std::endl;

    }
    std::cout << "Bye!" << std::endl;
    return 0;
}