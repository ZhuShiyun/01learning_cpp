/**
  ******************************************************************************
  * @file           : is_digit.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-7
  ******************************************************************************
  */

#include "iostream"

bool IsDigit(char c){
    if (c >= 48 && c <= 57)
        return true;
    else
        return false;
}

int main() {
    char a = '3';
    std::cout << IsDigit(a) << std::endl;

    return 0;
}