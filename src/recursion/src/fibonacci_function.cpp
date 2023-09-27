/**
  ******************************************************************************
  * @file           : fibonacci_function.cpp
  * @author         : b-zhushiyun
  * @brief          : 两种方法 实现斐波那契函数
  * @attention      : None
  * @date           : 23-9-27
  ******************************************************************************
  */

#include "iostream"

// 使用循环实现
unsigned int GetFibonacciLoop(unsigned int n){
    unsigned int i, f1, f2, f3;
    if (n == 2 || n == 1)
        return 1;
    f2 = 1;
    f1 = 1;
    for (i = 3; i <= n; i++) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    return f3;
}



// 使用递归实现
unsigned int GetFibonacciRecursion(unsigned int n){
    if (n == 2 || n == 1)       return 1;
    else                        return GetFibonacciRecursion((n-1)) + GetFibonacciRecursion((n-2));
}