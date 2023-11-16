/**
  ******************************************************************************
  * @file           : iterator02.cpp
  * @author         : b-zhushiyun
  * @brief          : vector容器中迭代器的基本使用
  * @attention      : None
  * @date           : 23-11-16
  ******************************************************************************
  */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
#if 0
	vector<int> vecIntA{1, 20, 300, 40, 5};

	// 构造一个迭代器对象
	vector<int>::iterator iter;
	iter = vecIntA.begin();

	cout << "*iter = " << *iter << endl;

	// 通过循环的方式使用迭代器遍历vecIntA容器中的元素
	cout << "通过循环的方式使用迭代器遍历vecIntA容器中的元素:" << endl;
	for (iter = vecIntA.begin(); iter != vecIntA.end() ; iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
#endif

	/**
	 * @brief 迭代器失效的原因1/2：插入元素导致迭代器失效
	 */
	vector<int> vecIntB;
	vecIntB.push_back(1);
	vecIntB.push_back(2);
	vecIntB.push_back(3);
	vecIntB.push_back(4);

	vector<int>::iterator iter = vecIntB.begin()+3;
	cout << "vecIntB的迭代器：" << *iter << endl;
	vecIntB.insert(iter, 8); // insert()函数会使原有的迭代器失效,返回一个新的迭代器。
	/*
	 * 所以，解决方法如下，上一行改成：
	 * iter = vecIntB.insert(iter, 8);
	 */
#if 0
	for (iter = vecIntB.begin(); iter != vecIntB.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
#endif
	cout << "迭代器失效，变成dangling pointer：" << *iter << endl; // iter迭代器失效了 ，此时的指针也叫“野指针”或者“悬空指针”，英文：dangling pointer

	/**
	 * @brief 迭代器失效的原因2/2：删除元素导致迭代器失效
	 */
	vector<int> cond = {1, 2, 3, 3, 3, 3, 4, 5, 6}; // 通过修改3的数量发现erase()函数似乎只删掉了一半的3
	vector<int>::iterator it = cond.begin();
	for (it; it != cond.end(); it++)
	{
		if (*it == 3)
		{
			cond.erase(it); // 这样并不能删掉所有的3
		}
	}
	cout << "并不能删掉所有的3： *it = " << *it << endl;
	for (it = cond.begin(); it != cond.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	// 解决方法
	vector<int> cond1 = {1, 2, 3, 3, 3, 3, 4, 5, 6};
	vector<int>::iterator it1 = cond1.begin();
	for (it1; it1 != cond1.end();) // 删掉一个元素后，迭代器会自动指向下一个元素，所以这里不需要it++
	{
		if (*it1 == 3)
		{
			it1 = cond1.erase(it1);
		}
		else
		{
			it1++;
		}
	}
	cout << "能删掉所有的3： *it1 = " << *it1 << endl;
	for (it1 = cond1.begin(); it1 != cond1.end(); it1++)
	{
		cout << *it1 << " ";
	}
	cout << endl;

	return 0;
}
