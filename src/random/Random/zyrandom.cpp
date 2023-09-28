/**
  ******************************************************************************
  * @file           : zyrandom.cpp
  * @author         : b-zhushiyun
  * @brief          : 实现
  * @attention      : None
  * @date           : 23-9-28
  ******************************************************************************
  */

#include "iostream"
#include "cstdlib"
#include "ctime"

using namespace std;

void Randomize(){
    srand((int)time(0)); // 用当前时间作为随机数生成器的种子
}

int GenerateRandomNumber(int min, int max){
    double _d;
    if(min > max){
        cout << "GenerateRandomNumber: Make sure min <= max\n";
        exit(1);
    }
    _d = (double)rand() / ((double)RAND_MAX + 1.0);
    return min + (int)(_d * (max - min + 1));
}

double GenerateRandomReal(double min, double max){
    double _d;
    if(min > max){
        cout << "GenerateRandomReal: Make sure min <= max\n";
        exit(2);
    }
    _d = (double)rand() / ((double)RAND_MAX);
    return min + _d * (max - min);
}
