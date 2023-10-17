/**
  ******************************************************************************
  * @file           : getline_get.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      :
  * @date           : 23-10-17
  ******************************************************************************
  */

#include <iostream>

using namespace std;

int main() {

    char str[5];
    cout << "Enter a string: " << endl;
    cin.getline(str, 6);
    cout << "You entered: " << str << endl;

    cout << "Enter a string: " << endl;
    cin.get(str, 5);
    cout << "You entered: " << str << endl;

    return 0;
}
