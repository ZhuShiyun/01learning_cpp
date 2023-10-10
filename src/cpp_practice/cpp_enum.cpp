/**
  ******************************************************************************
  * @file           : cpp_enum.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-7
  ******************************************************************************
  */

#include "iostream"

int main() {
    enum Weekday{SUN=7,MON=1,TUE,WED,THU,FRI,SAT};
    std::cout << Weekday{TUE};

    return 0;
}