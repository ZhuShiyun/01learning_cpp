/**
  ******************************************************************************
  * @file           : josephus_problem.cpp
  * @author         : b-zhushiyun
  * @brief          : 另一个约瑟夫环
  * @attention      : None
  * @date           : 23-11-8
  ******************************************************************************
  */
#include <iostream>
#include <list>

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

int main() {
	int n = 10;  // 总人数
	int k = 5;   // 报数到第几个人处决

	int survivor = josephus(n, k);
//	std::cout << "最后剩下的人是第 " << survivor << " 个人" << std::endl;
	std::cout << survivor << std::endl;
	return 0;
}

