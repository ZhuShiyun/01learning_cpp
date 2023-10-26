/**
  ******************************************************************************
  * @file           : exercise4.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-23
  ******************************************************************************
  */
  /*
   * Write a program that use `new` to allocate the array dynamically for five integers.
   * The five values will be stored in an array using a pointer.
   * Print the elements of the array in reverse order using a pointer.
   */

#include <iostream>
using namespace std;
int main()
{
	int* arr = new int[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Input the No." << i+1 << " integer:" << endl;
		cin >> arr[i];
	}

	for (int i = 4; i >= 0 ; i--)
	{
		cout << "The No." << i+1 << " integer is: " << arr[i] << endl;
	}

	delete[] arr;

	return 0;
}


