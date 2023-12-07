/**
  ******************************************************************************
  * @file           : 07newton_test1.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-12-7
  ******************************************************************************
  */
// 测试sqrt函数的运行速度
#include <iostream>
#include <cmath>

int main()
{
	clock_t start, finish;
	start = clock();


	int i;
	double x = 0.0;
	for (i = 0; i < 100000000; i++)
	{
		x = sqrt((double)i);
	}
	std::cout << x << std::endl;

	finish = clock();

	std::cout << "time: " << (double)(finish - start) / CLOCKS_PER_SEC << "s" << std::endl;

	return 0;
}