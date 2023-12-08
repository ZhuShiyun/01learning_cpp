/**
  ******************************************************************************
  * @file           : search_in_string02.cpp
  * @author         : b-zhushiyun
  * @brief          : find()函数
  * @attention      : None
  * @date           : 23-12-8
  ******************************************************************************
  */
#include <iostream>

using namespace std;

int main()
{
	string input_string;
	cout << " Input string:";
	getline(cin, input_string);

	string search_string;
	cout << "search:";
	getline(cin, search_string);

	int pos = input_string.find(search_string);


	cout << "pos = " << pos << endl;

	return 0;
}