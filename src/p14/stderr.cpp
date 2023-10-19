/**
  ******************************************************************************
  * @file           : stderr.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-18
  ******************************************************************************
  */
#include "iostream"

void div2(int n){
    if (n % 2 != 0){
        std::cerr << "Error: The input must be an even number. Here it is " << n << "." << std::endl;
    } else {
        int result = n / 2;
        std::cout << "Info: The result is " << result << "." << std::endl;
    }
    return;
}

int main() {
    for (int n = -5; n <= 5 ; n++) {
        div2(n);
    }

    return 0;
}