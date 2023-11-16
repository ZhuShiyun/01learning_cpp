/**
  ******************************************************************************
  * @file           : iterator01.cpp
  * @author         : b-zhushiyun
  * @brief          : 迭代器的本质
  * @attention      : None
  * @date           : 23-11-16
  ******************************************************************************
  */

#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector<int> vecIntA{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// 构造一个迭代器对象
	vector<int>::iterator it;
	// 让迭代器 it 指向容器 vecIntA 的第一个元素
	it = vecIntA.begin();

	cout << *it << endl;

	// 通过循环的方式遍历容器中的元素
	cout << "通过循环的方式遍历容器中的元素:" << endl;
	for (it = vecIntA.begin(); it != vecIntA.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	it = vecIntA.begin();
	cout << *it << endl;
	it = it + 2;
	cout << *it << endl;

	it = it - 2;
	cout << *it << endl;

	return 0;
}
