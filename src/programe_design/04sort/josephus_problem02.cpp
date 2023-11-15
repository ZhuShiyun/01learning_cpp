/**
  ******************************************************************************
  * @file           : josephus_problem02.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-11-10
  ******************************************************************************
  */
/**
* This is a solution of Josephus problem.
*/
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

int josephus(int n, int k) {
	std::list<int> people;
	for (int i = 1; i <= n; ++i) {
		people.push_back(i);
	}

	auto it = people.begin();
	while (people.size() > 1) {
		for (int count = 1; count < k; ++count) {
			++it;
			if (it == people.end()) {
				it = people.begin();
			}
		}
		it = people.erase(it);
		if (it == people.end()) {
			it = people.begin();
		}
	}

	return *it;
}

int main()
{
	int n = 10;  // 总人数
	int k = 5;   // 报数到第几个人处决


	return 0;
}