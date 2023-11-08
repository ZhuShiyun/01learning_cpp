/**
  ******************************************************************************
  * @file           : binsearch.cpp
  * @author         : b-zhushiyun
  * @brief          : 折半查找
  * @attention      :
  * @date           : 23-11-6
  ******************************************************************************
  */
#include <iostream>

using namespace std;

int cards[13] = {101, 112, 113, 206, 207, 208,
				 303,304,309,311,402, 405,410};
int main()
{
	int id = -1, low = 0, high = 12;
	while (low <= high)
	{
		int middle = (low + high) / 2;
		if (cards[middle] == 112)
		{
			id = middle;
			break;
		}
		else if (cards[middle] > 112)
		{
			high = middle - 1;
		}
		else
			low = middle + 1;
	}
	cout << "黑桃Q在第" << id + 1 << "张" << endl;

	return 0;
}