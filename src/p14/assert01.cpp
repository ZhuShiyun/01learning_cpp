/**
  ******************************************************************************
  * @file           : assert01.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-19
  ******************************************************************************
  */
#include "iostream"
#include "cassert"

using namespace std;
float division(float num1,float num2){
    assert(num2);
    return num1 / num2;
}

int main() {
    float num1;
    float num2;
    cout << "Enter num1 and num2:" << endl;

    while (cin >> num1, cin >> num2){
        float result = division(num1, num2);

        cout << "The result is: " << result << endl;
    }


    return 0;
}