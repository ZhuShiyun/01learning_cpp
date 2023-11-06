/**
  ******************************************************************************
  * @file           : count_heads.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-11-6
  ******************************************************************************
  */
#include <iostream>
int main()
{
	int l3 = 0, l5 = 0, l7 = 0;
	std::cin >> l3 >> l5 >> l7;
	int num[200];
	for (int i = 0; i < 200; i++)
	{
		num[i] = 0;
	}
	for (int i = l3; i < 200; i = i + 3)
	{
		num[i]++;
	}
	for (int i = l5; i < 200; i = i + 5)
	{
		num[i]++;
	}
	for (int i = l7; i < 200; i = i + 7)
	{
		num[i]++;
	}
	for (int i = 0; i < 200; i++)
		if (num[i] == 3)
		{
			std::cout << i << std:: endl;
			break;
		}

	return 0;
}