/**
  ******************************************************************************
  * @file           : 06binary_tree2.cpp
  * @author         : b-zhushiyun
  * @brief          : 使用明安图数（仰头）/卡塔兰数
  * @attention      : None
  * @date           : 23-12-1
  ******************************************************************************
  */
#include <iostream>

using namespace std;

int factorial(int n)
{
	int res = 1;
	for (int i = 2; i <= n; ++i) {
		res *= i;
	}
	return res;
}

int Mingantu(int n)
{
	return factorial(2 * n) / (factorial(n + 1) * factorial(n));
}

int main()
{
	int size = 3;
	cout << Mingantu(size) << endl;
	return 0;
}
