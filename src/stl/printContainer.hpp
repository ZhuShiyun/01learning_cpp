/**
  ******************************************************************************
  * @file           : printContainer.hpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-11-21
  ******************************************************************************
  */

#include <iostream>

/**
 * @brief 用于正向打印容器中的元素
 */
class printContainer
{
public:
	template<typename T>
	static void printInfo(std::string info, T t)
	{
		typename T::iterator it;
		std::cout << info;
		for (it = t.begin(); it != t.end(); it++)
		{
			std::cout << *it << " ";
		}
		std::cout << std::endl;
	}

	/**
	 * @brief 用于反向打印容器中的元素
	 */
	template<typename T>
	static void rPrintInfo(std::string info, T t)
	{
		typename T::reverse_iterator it;
		std::cout << info;
		for (it = t.rbegin(); it != t.rend(); it++)
		{
			std::cout << *it << " ";
		}
		std::cout << std::endl;
	}
};

