/**
  ******************************************************************************
  * @file           : 01exercise1.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-16
  ******************************************************************************
  */
#include "iostream"
#include "iomanip"
using namespace std;

int main() {
    float a = 0.1;
    float b = 0.2;
    float c = 0.3;

    cout << fixed << setprecision(2)<< a << endl;
    printf("%0.2f\n", b);
    cout << c << endl;

    return 0;
}
