/**
  ******************************************************************************
  * @file           : fact01.cpp
  * @author         : b-zhushiyun
  * @brief          : 阶乘 n! = n * (n - 1)!
  * @attention      : None
  * @date           : 23-11-8
  ******************************************************************************
  */
#include <iostream>
using namespace std;
int fact(int n)
{
	if (n == 1)
		return 1;
	return n * fact(n - 1);
}

int main()
{
	cout << "fact(3) = " << fact(3) << endl;

	return 0;
}