/**
  ******************************************************************************
  * @file           : min_search.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-11-6
  ******************************************************************************
  */
#include <iostream>

using namespace std;

int cards[13] = {101, 113, 303, 206, 405, 208,
				 311,304,410,309,112, 207,402};


int main()
{
	int min = 100, min_position = -1;
	for (int i = 0; i < 13; i++)
	{
		if (cards[i] % 100 > 7){ // 因为不考虑花色信息所以在这里去掉花色信息
			if (cards[i] % 100 < 100) {
				min = cards[i] % 100;
				min_position = i;
			}
		}
	}
	cout << min << endl;
	cout << min_position << endl;

	return 0;
}