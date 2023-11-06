/**
  ******************************************************************************
  * @file           : gather_soldiers.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : 韩信点兵
  * @date           : 23-11-6
  ******************************************************************************
  */
#include <iostream>

using namespace std;

int main()
{
	int l3 = 0, l5 = 0, l7 = 0;
	cin >> l3 >> l5 >> l7;
	int res = (l3 * 70 + l5 * 21 + l7 * 15) % 105;
	cout << res << endl;

	return 0;
}