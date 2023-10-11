/**
  ******************************************************************************
  * @file           : main.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-11
  ******************************************************************************
  */
#include <iostream>
#include "time.hpp"

using namespace std;

int main() {
    MyTime t1(2, 40);
    MyTime t2(1, 80);
    cout << t2.getTime() << endl;
    cout << (t1 + t2).getTime() << endl;

    // these two ways of invoking are the same.
    t1 += t2; // operator
    t1.operator+=(t2); // function

    cout << t1.getTime() << endl;


    return 0;
}