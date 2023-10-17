/**
  ******************************************************************************
  * @file           : 02exercise3.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-16
  ******************************************************************************
  */
#include <iostream>
using namespace std;
int main()
{
    cout << fixed;
    float f1 = 1.0f;
    cout<<"f1 = "<<f1<<endl;
    float a = 0.1f;
    float f2 = a+a+a+a+a+a+a+a+a+a;
    cout<<"f2 = "<<f2<<endl;
    // if(f1 == f2)
    if(abs(f1-f2)<0.00001)
        cout << "f1 = f2" << endl;
    else
        cout << "f1 != f2" << endl;
    return 0;
}

