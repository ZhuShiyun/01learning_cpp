/**
  ******************************************************************************
  * @file           : search_card.cpp
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
int position = -1;
int main()
{
	for (int i = 0; i < 13; i++){
		if (cards[i] == 112){ // 代表黑桃Q
			position =  i;
			break;
		}
	}
	if (position != -1)
		cout << "黑桃Q是第" << position + 1 << "张" << endl;
	else
		cout << "没找到。" << endl;

	return 0;
}
