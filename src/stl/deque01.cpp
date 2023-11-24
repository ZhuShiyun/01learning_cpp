/**
  ******************************************************************************
  * @file           : deque01.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-11-16
  ******************************************************************************
  */
#include <iostream>
#include <deque>
#include "printContainer.hpp"

using namespace std;

/**
 * @brief 用于打印Deque容器中的元素
 * @param info
 * @param d
 */
void printDeque(string info, deque<int> d)
{
	deque<int>::iterator it;
	cout << info;
	for (it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	deque<int> mydeque = {10, 20, 30, 40};

	// 在头部插入一个元素
	mydeque.push_front(5);
	printContainer::printInfo("deque contains -----> ", mydeque);
	printDeque("mydeque contains: ", mydeque);

	// 删除头部元素，建议用这种方法，可读性强
	mydeque.pop_front();
	printDeque("mydeque contains: ", mydeque);

	// 用erase删除头部元素也是可以的
	mydeque.erase(mydeque.begin());
	printDeque("mydeque contains: ", mydeque);

	return 0;
}
