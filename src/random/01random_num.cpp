/**
  ******************************************************************************
  * @file           : 01random_num.cpp
  * @author         : b-zhushiyun
  * @brief          : 随机数生成v1
  * @attention      : 每次生成的数都一样 伪随机
  * @date           : 23-9-28
  ******************************************************************************
  */

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int i;
    cout << "On this computer, the RAND_MAX is" << RAND_MAX << ".\n";
    cout << "Five numbers the rand function generates as follows:\n";
    for( i = 0; i < 5; i++ )
        cout << rand() << "; ";
    cout << endl;
    return 0;
}