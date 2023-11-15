/**
  ******************************************************************************
  * @file           : reverse_iterator01.cpp
  * @author         : b-zhushiyun
  * @brief          : 反向迭代器
  * @attention      : None
  * @date           : 23-11-13
  ******************************************************************************
  */
#include <iostream>
#include <vector>
#include <iterator>

int main()
{
	std::vector<int> myvector{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::reverse_iterator<std::vector<int>::iterator> myreverse_iterator(myvector.rbegin());
	std::cout << "The first element is: " << *myreverse_iterator << std::endl;
	std::cout << "The second element is: " << *(++myreverse_iterator) << std::endl;
	std::cout << *(myreverse_iterator + 3) << std::endl;
	std::cout << myreverse_iterator[-1] << std::endl;

	return 0;
}
