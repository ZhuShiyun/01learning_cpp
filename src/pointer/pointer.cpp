/**
  ******************************************************************************
  * @file           : pointer.cpp
  * @author         : b-zhushiyun
  * @brief          : https://www.bilibili.com/video/BV1Vf4y1P7pq?p=20&vd_source=385c8668128990a1175f24f4366f57fd
  * @attention      : None
  * @date           : 23-10-8
  ******************************************************************************
  */

#include "iostream"

using namespace std;

int main() {
    int num = 10;
    int * p1 = NULL, * p2 = NULL; // declaration two pointers, initialized to 0;
    p1 = &num; // take the address of num, assign to p1;
    p2 = &num; // take the address of num, assign to p2;
    cout << "num:" << num << endl;

    *p1 = 20; // assign 20 to num
    cout << "num:" << num << endl;

    *p2 = 30; // assign 30 to num
    cout << "num:" << num << endl;

    cout << "*p2:" << *p2 << endl;
    cout << "p2:" << p2 << endl;


    return 0;
}