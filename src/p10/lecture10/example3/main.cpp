/**
  ******************************************************************************
  * @file           : main.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-11
  ******************************************************************************
  */
#include "iostream"
#include "time.hpp"

using namespace std;
int main() {
    MyTime t0(1,80);
    cout << t0 << endl;

    MyTime t1(2, 40);
    std::cout << (30 + t1).getTime() << std::endl;

    std::cout << t1 << std::endl;
    std::cout << "Please input two integers:" << std::endl;
    std::cin >> t1;
    std::cout << t1 << std::endl;


    return 0;
}
