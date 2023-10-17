/**
  ******************************************************************************
  * @file           : main.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-16
  ******************************************************************************
  */
#include <iostream>
#include "Add.h"

using namespace std;
int main()
{
    int num1 = 2147483647;
    int num2 = 1;
    int result = 0;
    result = add(num1, num2);
    cout << "The result is " << result << endl;
    return 0;
}