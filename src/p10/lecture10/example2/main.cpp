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
    MyTime t1(2, 40);
    cout << (t1 + 30).getTime() << endl;

    t1 += 30; // 3:10
    t1.operator+=(30); // 3:40

    cout << t1.getTime() << endl;

    cout << (t1 + "one hour").getTime() << endl; // 4:40
    cout << (t1 + "two hours").getTime() << endl; // error, 3:40

    return 0;
}
