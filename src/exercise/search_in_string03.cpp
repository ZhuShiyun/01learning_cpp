/**
  ******************************************************************************
  * @file           : search_in_string02.cpp
  * @author         : b-zhushiyun
  * @brief          : search()函数
  * @attention      : C++中的std::search函数应用的是线性的Boyer Moore算法，其实际效率可能更高
  * @link 			: https://www.ruanyifeng.com/blog/2013/05/boyer-moore_string_search_algorithm.html
  * @date           : 23-12-8
  ******************************************************************************
  */
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string input_string;
	cout << " Input string:";
	getline(cin, input_string);

	string search_string;
	cout << "search:";
	getline(cin, search_string);

	int pos = search(input_string.begin(), input_string.end(), search_string.begin(), search_string.end()) - input_string.begin();

	if (pos != input_string.size())
	{
		cout << "pos = " << pos << endl;
	} else {
		cout << "pos = " << -1 << endl;
	}

	return 0;
}