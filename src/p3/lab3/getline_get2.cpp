/**
  ******************************************************************************
  * @file           : getline_get2.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-17
  ******************************************************************************
  */
#include <iostream>
using namespace std;
int main(){
    char name[20];    //客人名字
    char dessert[20];    //客人所点的甜品名
    cout << "请输入您的姓名：\n";
    cin >> name;
    cout << "请输入您想点的甜品名：\n";
    cin >> dessert;
    cout << "我为您提供了一些" << dessert << "," << name << "女士/先生" <<endl;
    return 0;
}
