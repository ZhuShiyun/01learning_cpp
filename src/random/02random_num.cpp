/**
  ******************************************************************************
  * @file           : 01random_num.cpp
  * @author         : b-zhushiyun
  * @brief          : 随机数生成v2
  * @attention      : 添加了一个种子
  * @date           : 23-9-28
  ******************************************************************************
  */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    int i;
    cout << "On this computer, the RAND_MAX is" << RAND_MAX << ".\n";
    cout << "Five numbers the rand function generates as follows:\n";

    srand( (int)time(0) );
    for( i = 0; i < 5; i++ )
        cout << rand() << "; ";
    cout << endl;
    return 0;
}