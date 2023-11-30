/**
  ******************************************************************************
  * @file           : 02string_ABCBA.cpp
  * @author         : b-zhushiyun
  * @brief          : 用户输入一个字符串，判断是否为回文字符串
  * @attention      : None
  * @date           : 23-11-29
  ******************************************************************************
  */

#include <iostream>
#include <string>

using namespace std;

class Palindrome // 回文判断
{
	string str;
	int len;
 public:
	Palindrome(string str)
	{
		this->str = str;
		this->len = str.length();
		if (this->len == 0)
		{
			cout << "Input is empty!" << endl;
		}
		else
		{
			int i = 0;
			int j = this->len - 1;
			while (i < j)
			{
				if (str[i] != str[j])
				{
					cout << "No" << endl;
					return;
				}
				i++;
				j--;
			}
			cout << "Yes" << endl;
		}
	}

};

int main()
{
	string str;
	cout << "Input:";
	cin >> str;
//	cout << str.length();
	Palindrome palindrome(str);
	return 0;
}
