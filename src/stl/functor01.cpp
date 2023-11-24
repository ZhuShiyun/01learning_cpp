/**
  ******************************************************************************
  * @file           : functor01.cpp
  * @author         : b-zhushiyun
  * @brief          : functor，翻译成函数对象，伪函数，算符，是重载了“()”操作符的普通类对象。从语法上讲，它与普通函数行为类似。
  * @attention      : None
  * @date           : 23-11-24
  ******************************************************************************
  */
#include <iostream>

using namespace std;

typedef int (*pFunc)(int, int);

class Calculate
{
 private:
	int add(int a, int b)
	{
		return a + b;
	}

	int sub(int a, int b)
	{
		return a - b;
	}

	int mul(int a, int b)
	{
		return a * b;
	}

	int divi(int a, int b)
	{
		return a / b;
	}

 public:
	int cal(int a, int b, pFunc func)
	{
		return func(a, b);
	}


};

int main()
{
	int a = 5;
	int b = 10;

	int result = 0;

	return 0;
}

