/**
  ******************************************************************************
  * @file           : factorial_function.cpp
  * @author         : b-zhushiyun
  * @brief          : 阶乘函数（Factorial function）的两种实现
  * @attention      : None
  * @date           : 23-9-27
  ******************************************************************************
  */

#include "iostream"

// 使用循环实现
unsigned int GetFactorialLoop(unsigned int n){
    unsigned int result = 1, i = 0;
    while ( ++i <= n)
        result *= i;
    return result;
}

// 使用递归实现
unsigned  int GetFactorialRecursion(unsigned int n){
    unsigned int result;
    if (n == 1)
        result = 1;
    else
        result = n * GetFactorialRecursion(n - 1);
    return result;
}