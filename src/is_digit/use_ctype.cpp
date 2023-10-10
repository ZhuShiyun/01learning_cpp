/**
  ******************************************************************************
  * @file           : use_ctype.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-7
  ******************************************************************************
  */

#include "iostream"
#include "cctype"

int main() {
    char i = '1';
    std::cout << isalpha(i) << std::endl;

    return 0;
}