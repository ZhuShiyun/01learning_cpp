/**
  ******************************************************************************
  * @file           : pointer-pointer.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-8
  ******************************************************************************
  */
#include "iostream"
using namespace std;

int main() {
    int a = 100;
    int * p = &a;
    int ** pp = &p;

    cout << a << endl;
    cout << p << endl;
    cout << pp << endl;

    *(*pp) = 20;
    cout << a << endl;
    
    return 0;
}