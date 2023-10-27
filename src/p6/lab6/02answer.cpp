/**
  ******************************************************************************
  * @file           : 02answer.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-27
  ******************************************************************************
  */
  /* Q: What compilation warnings occur when you compile the program? Why?
   * A: The compiler:
   * 	exercise2.cpp: In function ‘int* create_array(int)’:
		exercise2.cpp:17:6: warning: address of local variable ‘arr’ returned [-Wreturn-local-addr]
  		int arr[size];
      		^~~
  		--Because the variable 'arr' is a local variable(局部变量)，when the function create_array ended,
  		the data in 'arr' disappeared.
   */

   /* Q： What will happen if you ignore the warning and run the program?
    * A:  段错误 (核心已转储)
    */

#include <iostream>
using namespace std;

int arr[size];
int * create_array(int size)
{

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


