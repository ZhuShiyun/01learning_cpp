/**
  ******************************************************************************
  * @file           : boost1.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-24
  ******************************************************************************
  */
#include <iostream>
#include <boost/version.hpp>  //包含 Boost 头文件
#include <boost/config.hpp>  //包含 Boost 头文件
using namespace std;
int main()
{
	cout << BOOST_VERSION << endl;  //Boost 版本号
	cout << BOOST_LIB_VERSION << endl;  //Boost 版本号
	cout << BOOST_PLATFORM << endl;  //操作系统
	cout << BOOST_COMPILER << endl;  //编译器
	cout << BOOST_STDLIB << endl;  //标准库
	return 0;
}

//g++ -o a.out test.cpp

