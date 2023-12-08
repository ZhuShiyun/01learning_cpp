/**
  ******************************************************************************
  * @file           : search_in_string.cpp
  * @author         : b-zhushiyun
  * @brief          : 暴力的字符串匹配
  * @attention      : None
  * @date           : 23-12-7
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

	int pos = 0;

	string compare;

	for (int i = 0; i < input_string.size(); i++)
	{
		if (input_string[i] == search_string[0]){
			for (int j = 0; j < search_string.size(); j++)
			{
				compare += input_string[i+j];
			}
			// cout << "compare = " << compare << endl;
			if (compare == search_string){
				pos = i;
				break;
			} else {
				pos = -1;
			}
			compare = "";

		}

	}

	if (pos != -1)
	{
		cout << "pos = " << pos << endl;
	} else {
		cout << "Not found" << endl;
	}



	return 0;
}