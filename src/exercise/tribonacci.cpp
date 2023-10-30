/**
  ******************************************************************************
  * @file           : tribonacci.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : error
  * @date           : 23-10-30
  ******************************************************************************
  */
#include <iostream>
class Solution {
 public:
	int tribonacci(int n) {
		int T[38];
		T[0] = 0;
		T[1] = 1;
		T[2] = 1;

		for (int i = 3; i <= n; ++i) {
			T[i] = T[i + 3] - T[i + 1] - T[i + 2];
		}

		return T[n];
	}
};




int main()
{
	Solution solution;
	std::cout << solution.tribonacci(4) << std::endl;

	return 0;
}
