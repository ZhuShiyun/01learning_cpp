/**
  ******************************************************************************
  * @file           : insertion02.cpp
  * @author         : b-zhushiyun
  * @brief          : 简化写法
  * @attention      : None
  * @date           : 23-11-8
  ******************************************************************************
  */

int main()
{
	int cards[13] = {101, 113, 303, 206, 405, 208,
					 311,304,410,309,112, 207,402};

	for (int i = 1; i < 13; i++)
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

	return 0;
}