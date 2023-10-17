/**
  ******************************************************************************
  * @file           : 02exercise5.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-16
  ******************************************************************************
  */
#include <iostream>
#include<typeinfo>

int main()
{
    auto a = 10;
    std::cout << typeid(a).name() << std::endl;
    a = 20.5;
    std::cout << typeid(a).name() << std::endl;
    a += 10.5;
    std::cout << a << std::endl;
    return 0;
}
