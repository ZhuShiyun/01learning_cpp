/**
  ******************************************************************************
  * @file           : 01array.cpp
  * @author         : b-zhushiyun
  * @brief          : 用动态规划思想解决斐波那契数列问题
  * @attention      : 数组
  * @date           : 23-11-29
  ******************************************************************************
  */
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	// 求第n项
	int f[n + 1];
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	cout << f[n] << endl;


	return 0;
}