/**
  ******************************************************************************
  * @file           : stack01.cpp
  * @author         : b-zhushiyun
  * @brief          : stack容器的基本使用
  * @attention      : None
  * @date           : 23-11-23
  ******************************************************************************
  */
#include <iostream>
#include <stack>

using namespace std;

int main()
{
	/**
	 * @brief stack容器的默认构造方式
	 */
	stack<int> stackIntA;

	/**
	 * @brief stack容器的pop()和push()函数
	 */
	// push()函数：入栈-在栈顶插入一个元素
	stackIntA.push(1);
	stackIntA.push(2);
	stackIntA.push(0);
	stackIntA.push(7);

	// stack容器没有迭代器，所以不能用迭代器遍历
	cout << "stackIntA top(): " << stackIntA.top() << endl; // top()函数：返回栈顶元素的值
	stackIntA.pop(); // pop()函数：出栈-删除栈顶元素
	cout << "stackIntA top(): " << stackIntA.top() << endl; // top()函数：返回栈顶元素的值

	stackIntA.pop();
	stackIntA.pop();
//	stackIntA.pop();
//	cout << "stackIntA top(): " << stackIntA.top() << endl;

	while (!stackIntA.empty()) // 整体出栈的方式
	{
		cout << "stackIntA top(): " << stackIntA.top() << endl;
		stackIntA.pop();
	}

	/**
	 * @brief stack对象的拷贝构造与赋值
	 */
	stackIntA.push(1);
	stackIntA.push(2);
	stackIntA.push(0);
	stackIntA.push(7);
	cout << "stackIntB: " << endl;
	stack<int> stackIntB(stackIntA); // 拷贝构造1
	while (!stackIntB.empty())
	{
		cout << "stackIntB top(): " << stackIntB.top() << endl;
		stackIntB.pop();
	}

	cout << "stackIntC: " << endl;
	stack<int> stackIntC = stackIntA; // 这种方式会调用拷贝构造函数
	stackIntC = stackIntA; // 这种方式会调用赋值函数 "="重载
	while (!stackIntC.empty())
	{
		cout << "stackIntC top(): " << stackIntC.top() << endl;
		stackIntC.pop();
	}

	/**
	 * @brief stack的大小
	 */
	cout << "stackIntA size(): " << stackIntA.size() << endl; // size()函数：返回栈中元素的个数
	cout << "stackIntA empty(): " << stackIntA.empty() << endl; // empty()函数：判断栈是否为空

	return 0;
}
