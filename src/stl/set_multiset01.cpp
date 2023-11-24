/**
  ******************************************************************************
  * @file           : set_multiset01.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-11-24
  ******************************************************************************
  */
#include <iostream>
#include <set>
#include "printContainer.hpp"

using namespace std;

int main()
{
	/**
	 * @brief set容器的默认构造方式
	 */
	set<int> setIntA;
	set<float> setFloatA;
	set<string> setStringA;
	multiset<int> multisetIntA;
	multiset<float> multisetFloatA;
	multiset<string> multisetStringA;

	/**
	 * @brief set容器的insert()函数
	 */
	cout << "------------->insert()函数<-------------" << endl;
	setIntA.insert(1);
	setIntA.insert(2);
	setIntA.insert(0);
	setIntA.insert(7);

	set<int>::iterator iter1;
	for (iter1 = setIntA.begin(); iter1 != setIntA.end(); iter1++)
	{
		cout << *iter1 << " ";
	}
	cout << endl;
	printContainer::printInfo("setIntA: ", setIntA);
	printContainer::rPrintInfo("r-setIntA: ", setIntA); //set<int>::reverse_iterator

	/**
	 * @brief set容器的拷贝构造与赋值
	 */
	cout << "------------->拷贝构造与赋值<-------------" << endl;
	set<int> setIntB(setIntA); // 拷贝构造1
	set<int> setIntC; // 默认构造函数
	setIntC = setIntA; // 拷贝构造2
	printContainer::printInfo("setIntB: ", setIntB);
	printContainer::printInfo("setIntC: ", setIntC);

	setIntC.insert(3);
	setIntC.insert(1);
	setIntC.insert(2);
	setIntC.insert(9);
	printContainer::printInfo("setIntC: ", setIntC);

	cout << "--->swap()函数" << endl;
	setIntC.swap(setIntB);
	printContainer::printInfo("setIntC: ", setIntC);
	printContainer::printInfo("setIntB: ", setIntB);

	/**
	 * @brief set容器的erase()函数
	 */
	cout << "------------->erase()函数<-------------" << endl;
	set<int> setIntD;
	setIntD = setIntB; // setIntD = 0,1,2,3,7,9
	setIntD.erase(setIntD.begin()); // 删除第一个元素 1 2 3 7 9
	set<int>::iterator itD;
	itD = setIntD.begin();
	setIntD.erase(itD); // 删除第一个元素 2 3 7 9
	printContainer::printInfo("setIntD: ", setIntD);

	// 删除最大值
	itD = setIntD.end();
	cout << "01itD: " << *itD << endl;

	itD--; // 因为end()函数返回的是最后一个元素的下一个位置，所以要先减1
	cout << "02itD: " << *itD << endl;

	itD = setIntD.erase(itD); // 删除最后一个元素 2 3 7
	cout << "03itD: " << *itD << endl; // 这里为什么是3而不是7？ 因为erase()函数返回的是删除元素的下一个位置
	printContainer::printInfo("setIntD: ", setIntD);
	cout << "04itD: " << *itD << endl;
	itD++;
	cout << "05itD: " << *itD << endl;


	// 用反向迭代器?-----> set不支持反向迭代器
#if 0
	set<int>::reverse_iterator rItD;
	rItD = setIntD.rbegin();
	setIntD.erase(rItD); // 编译失败，因为erase()函数的参数是正向迭代器
	printContainer::printInfo("setIntD: ", setIntD);
#endif

	// 删除某个元素
	setIntD.erase(2);
	printContainer::printInfo("setIntD: ", setIntD);

	// 如果要删除的元素不在set中，会怎么样？
	cout << "删除的元素不在set中： " << setIntD.erase(100) << endl; // 不会报错，但是也不会删除任何元素,返回true或者false

	/**
	 * @brief set容器的元素排序
	 */
	cout << "------------->元素排序<-------------" << endl;
	set<int, less<int>> setIntE; // 默认是升序
	set<int, greater<int>> setIntF; // 降序

	setIntE.insert(1);
	setIntE.insert(2);
	setIntE.insert(0);
	setIntE.insert(7);

	setIntF.insert(1);
	setIntF.insert(2);
	setIntF.insert(0);
	setIntF.insert(7);

	printContainer::printInfo("setIntE-Ascending: ", setIntE);
	printContainer::printInfo("setIntF-Descending: ", setIntF);

	/**
	 * @brief set容器的数据存取
	 */
	cout << "------------->数据存取<-------------" << endl;
	set<int>::iterator itE;
	itE = setIntE.find(2); // find()函数：返回指向要查找元素的迭代器
	cout << "setIntE.find(2): " << *itE << endl;

	itE = setIntE.find(100); /// find()函数：返回指向要查找元素的迭代器
	if (itE == setIntE.end())
	{
		cout << "setIntE.find(100): " << "not found" << endl;
	}
	cout << "setIntE.find(100): " << *itE << endl; // 如果要查找的元素不在set中，返回的是end()函数返回的迭代器


	/// count()函数：返回set中指定元素的个数(**)
	cout << "setIntE.count(2): " << setIntE.count(2) << endl;
	cout << "setIntE.count(100): " << setIntE.count(100) << endl;

	/// lower_bound()函数：返回第一个大于等于指定元素的迭代器
	cout << "setIntE.lower_bound(2): " << *setIntE.lower_bound(2) << endl;
	cout << "setIntE.lower_bound(100): " << *setIntE.lower_bound(100) << endl; // 如果要查找的元素不在set中，返回的是end()函数返回的迭代器

	/// upper_bound()函数：返回第一个大于指定元素的迭代器
	cout << "setIntE.upper_bound(2): " << *setIntE.upper_bound(2) << endl;
	cout << "setIntE.upper_bound(100): " << *setIntE.upper_bound(100) << endl;
	set<int>::iterator it = setIntE.upper_bound(100);
	it--;
	cout << "*it: " << *it << endl;
	it--;
	cout << "*it: " << *it << endl;

	/**
	 * @brief set.equal_range()函数
	 */
	cout << "------------->set.equal_range()函数<-------------" << endl;
	pair<set<int>::iterator, set<int>::iterator> pairIt; // pair是什么？ pair是一个模板类，用于存储两个数据
	pairIt = setIntE.equal_range(2); // equal_range()函数：返回一个pair对象，包含两个迭代器，分别指向第一个大于等于指定元素的迭代器和第一个大于指定元素的迭代器
	cout << "setIntE.equal_range(2): " << *pairIt.first  << endl;
	cout << "setIntE.equal_range(2): " << *pairIt.second << endl;

	return 0;
}
