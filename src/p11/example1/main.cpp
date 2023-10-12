/**
  ******************************************************************************
  * @file           : main.cpp
  * @author         : b-zhushiyun
  * @brief          : dynamic memory example1
  * @attention      : Exist memory leak (存在内存泄露）
  *                   see: https://www.bilibili.com/video/BV1Vf4y1P7pq?p=48&spm_id_from=pageDriver&vd_source=385c8668128990a1175f24f4366f57fd
  * @date           : 23-10-12
  ******************************************************************************
  */
#include <iostream>
#include "mystring.hpp"

using namespace std;

// Why memory leak and memory double free?
int main()
{
    MyString str1(10, "Shenzhen");
    cout << "str1: " << str1 << endl;

    MyString str2 = str1;
    cout << "str2: " << str2 << endl;

    MyString str3;
    cout << "str3: " << str3 << endl;
    str3 = str1;
    cout << "str3: " << str3 << endl;

    return 0;
}
