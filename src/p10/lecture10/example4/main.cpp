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
    MyTime t1(1, 30);
    int minutes = t1; // implicit conversion
    float f = float(t1); // explicit conversion
    cout << "minutes = " << minutes << endl;
    cout << "minutes = " << f << endl;

    MyTime t2 = 70;
    cout << "t2 is " << t2 << endl;

    MyTime t3;
    t3 = 80;
    cout << "t3 is " << t3 << endl;

    return 0;
}


