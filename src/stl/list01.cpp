/**
  ******************************************************************************
  * @file           : list01.cpp
  * @author         : b-zhushiyun
  * @brief          : list容器的基本使用
  * @attention      : None
  * @date           : 23-11-21
  ******************************************************************************
  */
#include <iostream>
#include <list>
#include "printContainer.hpp"

using namespace std;

int main()
{
	/**
	 * @brief list容器的基本使用
	 */
	list<int> lst; // 构造list对象

	cout << "----------> list容器头尾操作 <----------" << endl;
	lst.push_back(10); // 在尾部插入一个元素（类似尾插法）
	lst.push_front(20); // 在头部插入一个元素（类似头插法）
	//调用printContainer类中的printInfo函数
	printContainer::printInfo("lst contains: ", lst);
	lst.pop_back(); // 删除尾部元素
	printContainer::printInfo("Del the last elem: ", lst);

	int arr[] = {1, 3, 5, 7};
	// 在lst中放入arr
	lst.insert(std::next(lst.begin(),1), arr, arr + 4);
	printContainer::printInfo("lst contains: ", lst);

	lst.pop_front(); // 删除头部元素
	printContainer::printInfo("Del the first elem: ", lst);

	auto lst_front = lst.front(); // 获取第一个元素的值
	cout << "The first element: " << lst_front << endl;

	auto lst_back = lst.back(); // 获取最后一个元素的值
	cout << "The last element: " << lst_back << endl;

	lst.front() = 100; // 给第一个元素赋值
	lst.back() = 700; // 给最后一个元素赋值
	printContainer::printInfo("lst contains: ", lst);

	/**
	 * @brief list与反向迭代器
	 */
	cout << "----------> list与反向迭代器 <----------" << endl;
	list<int>::reverse_iterator rit;
	cout << "反向迭代： ";
	for (rit = lst.rbegin(); rit != lst.rend() ; rit++)
	{
		cout << *rit << " ";
	}
	cout << endl;

	printContainer::rPrintInfo("反向迭代： ", lst); // 调用rPrintInfo()函数输出信息

	/**
	 * @brief list带参数构造
	 */
	cout << "----------> list带参数构造 <----------" << endl;
	list<int> lst1(3, 5); // 方法一
	printContainer::printInfo("lst1: ", lst1);

	list<int> lst2(lst1.begin(), lst1.end()); // 方法二
	printContainer::printInfo("lst2: ", lst2);

	list<int>::iterator it_lst2 = lst2.begin();
	it_lst2++;
	it_lst2++;
	list<int> lst2_1(it_lst2, lst2.end()); // 方法二的另一种写法
	printContainer::printInfo("lst2_1: ", lst2_1);

	list<int> lst3(lst2); // 方法三
	printContainer::printInfo("lst3: ", lst3);

	/**
	 * @brief list的赋值操作
	 */
	cout << "----------> list的赋值操作 <----------" << endl;
	list<int> lst4, lst5;
	list<int>::iterator it_lst = lst.end();
	it_lst--;
	lst4.assign(lst.begin(), it_lst); /// 方法一: list.assign(beg,end);
	printContainer::printInfo("lst4: ", lst4);

	lst5.assign(5, 2); /// 方法二: list.assign(n,elem);
	printContainer::printInfo("lst5: ", lst5);

	list<int> lst6; ///重载等号操作符
	lst6 = lst5;
	printContainer::printInfo("lst6: ", lst6);

	lst6.swap(lst4); /// 交换两个list容器
	printContainer::printInfo("lst6: ", lst6);
	printContainer::printInfo("lst4: ", lst4);

	/**
	 * @brief list的大小操作
	 */
	cout << "----------> list的大小操作 <----------" << endl;
	lst5 = lst;
	cout << "lst5.size(): " << lst5.size() << endl; // 获取list容器中元素的个数
	cout << "lst5.max_size(): " << lst5.max_size() << endl; // 获取list容器中最大元素的个数(这是啥
	cout << "lst5.empty(): " << lst5.empty() << endl; // 判断list容器是否为空
	lst5.resize(lst5.size()+3); // 重新指定list容器的长度
	printContainer::printInfo("lst5: ", lst5);
	lst5.resize(lst5.size()-2); // 重新指定list容器的长度
	printContainer::printInfo("lst5: ", lst5);

	/**
	 * @brief list的插入操作
	 */
	cout << "----------> list的插入操作 <----------" << endl;
	//在pos位置插入一个elem元素的拷贝，返回新数据的位置。
	list<int>::iterator it_lst5 = lst5.begin();
	cout << "*it_lst5: " << *it_lst5 << endl;
	it_lst5++;
	cout << "*it_lst5: " << *it_lst5 << endl;
//	lst5.insert(it_lst5, 40); // 在下标为1的位置插入40
	lst5.insert(it_lst5, 2); // 在下标为1的位置插入2
	printContainer::printInfo("lst5: ", lst5);

	cout << "*it_lst5: " << *it_lst5 << endl;

	//在pos位置插入n个elem数据，无返回值。
	lst5.insert(it_lst5, 3, 50); // 在下标为it_lst5的位置插入3个50
	printContainer::printInfo("lst5: ", lst5);

	//在pos位置插入[beg,end)区间的数据，无返回值。
	lst5.insert(it_lst5, lst.begin(), lst.end()); // 在下标为it_lst5的位置插入lst容器中的所有元素
	printContainer::printInfo("lst5: ", lst5);

	/**
	 * @brief list的删除操作
	 */
	cout << "----------> list的删除操作 <----------" << endl;
	// 删除pos位置的元素，返回下一个元素的位置。
	list<int> lst7 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	list<int>::iterator it_lst7 = lst7.begin();
	it_lst7++;
	it_lst7++;
	cout << "*it_lst7: " << *it_lst7 << endl;
	it_lst7 = lst7.erase(it_lst7); //删除pos位置的数据，返回下一个数据的位置。
	printContainer::printInfo("lst7: ", lst7);
	cout << "*it_lst7: " << *it_lst7 << endl;

	it_lst7++;
	lst7.erase(lst7.begin(), it_lst7); // 删除区间内的数据，返回下一个数据的位置。
	printContainer::printInfo("lst7: ", lst7);

	lst7.push_front(1);
	lst7.push_front(1);
	lst7.push_front(1);
	printContainer::printInfo("lst7: ", lst7);
	lst7.remove(1); // 删除容器中所有与elem相等的元素。
	printContainer::printInfo("lst7: ", lst7);

	lst7.clear(); // 清空容器中所有的元素
	cout << "empty?: " << lst7.empty() << endl;

	/**
	 * @brief list的反序排列
	 */
	cout << "----------> list的反序排列 <----------" << endl;
	lst5.reverse(); // 反转链表
	printContainer::printInfo("lst5: ", lst5);

	/**
	 * @brief iterator的失效
	 */
	cout << "----------> iterator的失效 <----------" << endl;
	list<int> lst8 = {1, 2, 3, 3, 3, 3, 4, 5, 6, 7, 8, 9};
	list<int>::iterator it_lst8 = lst8.begin();
	// 错误做法
//	for (it_lst8; it_lst8 != lst8.end(); it_lst8++)
//	{
//		if (*it_lst8 == 3)
//		{
//			lst8.erase(it_lst8); // 这样并不能删掉所有的3
//		}
//	}
//	cout << "并不能删掉所有的3： *it_lst8 = " << *it_lst8 << endl;

	// 正确的做法
	for (it_lst8; it_lst8 != lst8.end(); )
	{
		if (*it_lst8 == 3)
		{
			it_lst8 = lst8.erase(it_lst8);
		}
		else
		{
			it_lst8++;
		}
	}
	printContainer::printInfo("lst8: ", lst8);


	return 0;
}