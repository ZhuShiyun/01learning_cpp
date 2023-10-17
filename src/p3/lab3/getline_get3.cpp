/**
  ******************************************************************************
  * @file           : getline_get3.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-17
  ******************************************************************************
  */
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
char name[30];/*客人名字*/ char dessert[30];    //客人所点的甜品名
int main(){
    cout << "请输入您的姓名：\n";
    cin.getline(name,2);
    cout << "请输入您想点的甜品名：\n";
    cin.getline(dessert,2);
    cout << name << '\t' << strlen(name) << '\t' << dessert << '\t' << strlen(dessert) << endl;
    cout << "我为您提供了一些" << dessert << "," << name << "女士/先生" <<endl;
    return 0;
}