/**
  ******************************************************************************
  * @file           : insertion.cpp
  * @author         : b-zhushiyun
  * @brief          : 插入排序
  * @attention      :
  * @date           : 23-11-8
  ******************************************************************************
  */

#include <iostream>
using namespace std;
int main()
{
	int cards[13] = {101, 113, 303, 206, 405, 208,
					 311,304,410,309,112, 207,402};

	for (int i = 1; i < 13; i++)
	{
		int target = cards[i], min = 500, pos = -1;
		for (int j = 0; j < i; j++)
		{
			if (cards[j] > target)
				if (cards[j] < min)
				{
					min = cards[j];
					pos = j;
				}
			if (pos != -1)
			{
				for (int j = i; j < pos; j--)
				{
					cards[j] = cards[j - 1];
				}
				cards[pos] = target;
			}
		}
	}

	return 0;
}


