/**
  ******************************************************************************
  * @file           : queue01.cpp
  * @author         : b-zhushiyun
  * @brief          : queue容器的基本使用
  * @attention      : None
  * @date           : 23-11-23
  ******************************************************************************
  */
#include <iostream>
#include <queue>

using namespace std;
int main()
{
	/**
	 * @brief queue容器的默认构造方式
	 */
	queue<int> queueIntA;
	queue<float> queueFloatA;
	queue<string> queueStringA;

	/**
	 * @brief queue容器的push()和pop()函数
	 */
	queueIntA.push(1);
	queueIntA.push(2);
	queueIntA.push(0);
	queueIntA.push(7);

	// queue容器没有迭代器，所以不能用迭代器遍历
	cout << "queueIntA front(): " << queueIntA.front() << endl; // front()函数：返回队首元素的值

	queueIntA.pop(); // pop()函数：出队-删除队首元素
	cout << "queueIntA front(): " << queueIntA.front() << endl; // front()函数：返回队首元素的值

	while (!queueIntA.empty()) // 整体出队的方式
	{
		cout << "queueIntA front(): " << queueIntA.front() << endl;
		queueIntA.pop();
	}

	/**
	 * @brief queue对象的拷贝构造与赋值
	 */
	queueIntA.push(1);
	queueIntA.push(2);
	queueIntA.push(0);
	queueIntA.push(9);

	queue<int> queueIntB(queueIntA); // 拷贝构造1
	queue<int> queueIntC; // 默认构造函数
	queueIntC = queueIntA; // 拷贝构造2

	while (!queueIntB.empty())
	{
		cout << "queueIntB front(): " << queueIntB.front() << endl;
		queueIntB.pop();
	}

	while (!queueIntC.empty())
	{
		cout << "queueIntC front(): " << queueIntC.front() << endl;
		queueIntC.pop();
	}

	/**
	 * @brief queue容器的数据存取
	 */
	queueIntA.front() = 301; // front()函数：返回队首元素的值
	cout << "queueIntA front(): " << queueIntA.front() << endl; // front()函数：返回队首元素的值

	queueIntA.back() = 222; // back()函数：返回队尾元素的值
	cout << "queueIntA back(): " << queueIntA.back() << endl; // back()函数：返回队尾元素的值

	while (!queueIntA.empty())
	{
		cout << "queueIntA front(): " << queueIntA.front() << endl;
		queueIntA.pop();
	}

	/**
	 * @brief queue容器的大小
	 */
	cout << "queueIntA size(): " << queueIntA.size() << endl; // size()函数：返回队列中元素的个数
	cout << "queueIntA empty(): " << queueIntA.empty() << endl; // empty()函数：判断队列是否为空


	return 0;
}

