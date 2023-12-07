/**
  ******************************************************************************
  * @file           : 07newton_test1.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : 对比了现今sqrt()函数和雷神之锤的开方函数的运行速度，发现现在sqrt()函数已经更快了(时代的眼泪)
  * @date           : 23-12-7
  ******************************************************************************
  */
// 测试雷神之锤开方函数的运行速度
#include <iostream>
#include <cmath>

inline double Q_sqrt(double x)
{
	if(x == 0) return 0;
	float result = x;
	float xhalf = 0.5f*result;
	int i = *(int*)&result;
	i = 0x5f375a86- (i>>1); // what the fuck?
	result = *(float*)&i;
	result = result*(1.5f-xhalf*result*result); // Newton step, repeating increases accuracy
	result = result*(1.5f-xhalf*result*result);
	return 1.0/result;
}

int main()
{
	clock_t start, finish;
	start = clock();

	int i;
	double x = 0.0;
	for (i = 0; i < 100000000; i++)
	{
		x = Q_sqrt((double)i);
	}
	std::cout << x << std::endl;

	finish = clock();

	std::cout << "q_sqrt() time: " << (double)(finish - start) / CLOCKS_PER_SEC << "s" << std::endl;

	start = clock();

	x = 0.0;
	for (i = 0; i < 100000000; i++)
	{
		x = sqrt((double)i);
	}
	std::cout << x << std::endl;

	finish = clock();

	std::cout << "sqrt() time: " << (double)(finish - start) / CLOCKS_PER_SEC << "s" << std::endl;



	return 0;
}