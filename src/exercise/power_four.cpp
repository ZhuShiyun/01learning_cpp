/**
  ******************************************************************************
  * @file           : power_four.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      :
  * Given an integer n, return true if it is a power of four. Otherwise, return false.
  * An integer n is a power of four, if there exists an integer x such that n == 4^x.
  * @date           : 23-10-30
  ******************************************************************************
  */

#include "cmath"
#include "iostream"

class Solution {
 public:
	bool isPowerOfFour(int n) {
		if (n <=0)
			return false;
		if (n == 1)
			return true;
		for (int i = 1; i <= 31 ; i++)
		{
			if (n == pow(4,i))
				return true;
		};
		return false;
	}
};

int main()
{
	unsigned long int a = 0;
	a = pow(2,30);
	std::cout << "a = " << a << std::endl;
	Solution solution;
	std::cout << solution.isPowerOfFour(1073741824) << std::endl;


	return 0;
}
