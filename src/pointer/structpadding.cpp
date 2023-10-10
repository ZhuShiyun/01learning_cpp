/**
  ******************************************************************************
  * @file           : structpadding.cpp
  * @author         : b-zhushiyun
  * @brief          : In order to align the data in memory,some empty bytes will be padded
  * @attention      : struct and class in C++ are almost same, so No typedef needed in C++!
  * @date           : 23-10-10
  ******************************************************************************
  */
#include <iostream>
using namespace std;

struct Student1{
    int id;
    bool male;
    char label;
    float weight;
};

struct Student2{
    int id;
    bool male;
    float weight;
    char label;
};

int main()
{
    cout << "Size of Student1: " << sizeof(Student1) << endl;
    cout << "Size of Student2: " << sizeof(Student2) << endl;
    return 0;
}