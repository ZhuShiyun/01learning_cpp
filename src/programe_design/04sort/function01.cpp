/**
  ******************************************************************************
  * @file           : function01.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-11-8
  ******************************************************************************
  */
#include <iostream>

void InsertionSort(int cards[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int target = cards[i],pos = 0;
		while (target > cards[pos])
		{
			pos++;
		}
		for (int j = i; j > pos; j--)
		{
			cards[j] = cards[j - 1];
		}
		cards[pos] = target;
	}
}

void SelectionSort(int cards[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int min = cards[i], min_id = i;
		for (int j = i + 1; j < n; j++)
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
}

int main()
{
	int cards[5] = {2,8,6,3,1};

	SelectionSort(cards,5);
	for (int i = 0; i < 5; i++)
	{
		std::cout << cards[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}