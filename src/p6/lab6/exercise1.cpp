/**
  ******************************************************************************
  * @file           : exercise1.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : Fix bugs of the program and run it correctly without memory leak.
  *
  * Note: In a function with pointer parameters, the pointers should be checked first.
  * If there is no such statement, please add it.
  *
  * @date           : 23-10-27
  ******************************************************************************
  */
/*
 * Here is the old version.
 */
#include <iostream>
using namespace std;
#define SIZE 5
int main()
{
	int const *pa = new int[SIZE]{3,5,8,2,6};
	int total = sum(pa,SIZE);
	cout << "sum = " << total << endl;
	return 0;
}
int sum(const int *pArray, int n)
{
	int s = 0;
	for(int i = 0; i < n; i++)
		s += pArray[i];
	return s;
}
