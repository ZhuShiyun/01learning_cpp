/**
  ******************************************************************************
  * @file           : main.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-7
  ******************************************************************************
  */

#include "iostream"
#include "arrmanip.h"

using namespace std;
#define NUMBER_OF_ELEMENTS 8
const int lower = 10;
const int upper = 99;

int main() {
    int a[NUMBER_OF_ELEMENTS];
    GenerateIntegers(a, NUMBER_OF_ELEMENTS,lower,upper);
    cout << "Array generated at random as follows: \n";
    PrintIntegers(a, NUMBER_OF_ELEMENTS);
    ReverseIntegers(a, NUMBER_OF_ELEMENTS);
    cout << "After all elements of the array reversed: \n";
    PrintIntegers(a, NUMBER_OF_ELEMENTS);
    return 0;
}