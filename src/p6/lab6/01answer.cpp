/**
  ******************************************************************************
  * @file           : 01answer.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : My answer of exercise1
  * @date           : 23-10-27
  ******************************************************************************
  */
/*
* Here is my version:
*/
#include <iostream>
using namespace std;
#define SIZE 5

int sum(const int *pArray, int n)
{
	if (pArray == nullptr) {
		cerr << "Error: nullptr array pointer." << endl;
		return 0;
	}

	int s = 0;
	for(int i = 0; i < n; i++)
		s += pArray[i];
	return s;
}
int main()
{
	const int *pa = new int[SIZE]{3,5,8,2,6};
	int total = sum(pa,SIZE);
	cout << "sum = " << total << endl;
	delete[] pa;
	return 0;
}
