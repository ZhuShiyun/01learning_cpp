/**
  ******************************************************************************
  * @file           : sum.cpp
  * @author         : b-zhushiyun
  * @brief          : 编写程序,使用数组存储用户输入的 5 个整数,并计算它们的和
  * @attention      : None
  * @date           : 23-10-7
  ******************************************************************************
  */

#include "iostream"

using namespace std;

int main() {
    int i, a[5], result = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Integer No." << i + 1 << ": ";
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++) {
        result += a[i];
    }
    cout << "The sum of elements of the array is " << result;
    return 0;
}