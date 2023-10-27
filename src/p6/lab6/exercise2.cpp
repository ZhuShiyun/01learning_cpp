/**
  ******************************************************************************
  * @file           : exercise2.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      :
  * What compilation warnings occur when you compile the program? Why?
  * What will happen if you ignore the warning and run the program?
  * Fix bugs of the program and run it correctly without memory leak.
  * @date           : 23-10-27
  ******************************************************************************
  */
#include <iostream>
using namespace std;
int * create_array(int size)
{
	int arr[size];
	for(int i = 0; i < size; i++)
		arr[i] = i * 10;
	return arr;
}
int main()
{
	int len = 16;
	int *ptr = create_array(len);
	for(int i = 0; i < len; i++)
		cout << ptr[i] << " ";
	return 0;
}
