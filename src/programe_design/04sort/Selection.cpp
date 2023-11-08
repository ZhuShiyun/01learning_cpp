/**
  ******************************************************************************
  * @file           : Selection.cpp
  * @author         : b-zhushiyun
  * @brief          : 选择排序
  * @attention      : None
  * @date           : 23-11-8
  ******************************************************************************
  */

#include <iostream>
int main()
{
	int cards[13] = {101, 113, 303, 206, 405, 208,
					 311,304,410,309,112, 207,402};
	for (int i = 0; i < 13; i++)
	{
		int min = cards[i], min_id = i;
		for (int j = i + 1; j < 13; j++)
		{
			if (cards[j] < min)
			{
				min = cards[j];
				min_id = j;
			}
		}
		cards[min_id] = cards[i];
		cards[i] = min;
	}

	for (int i = 0; i < 13; i++)
	{
		std::cout << cards[i] << std::endl;
	}

	return 0;
}