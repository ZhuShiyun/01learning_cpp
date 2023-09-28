/**
  ******************************************************************************
  * @file           : main.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-9-28
  ******************************************************************************
  */

#include "iostream"
#include "zyrandom.h"

using namespace std;
int main() {
    Randomize();
    for (int i = 0; i < 8; i++) {
        int t = GenerateRandomNumber(10,99);
        cout << t << "  ";
    }
    cout << endl;
    for (int i = 0; i < 8; i++) {
        double d = GenerateRandomReal(10.0, 99.99);
        cout << d << "  ";
    }
    cout << endl;
    return 0;
}