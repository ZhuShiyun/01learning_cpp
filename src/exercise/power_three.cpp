/**
  ******************************************************************************
  * @file           : power_three.cpp
  * @author         : b-zhushiyun
  * @brief          :
  * Given an integer n, return true if it is a power of three. Otherwise, return false.
  * An integer n is a power of three, if there exists an integer x such that n == 3^x.
  * @attention      : None
  * @date           : 23-10-30
  ******************************************************************************
  */
#include "iostream"
#include "cmath"

class Solution {
 public:
	bool isPowerOfThree(int n) {
		if (n <=0)
			return false;
		if (n == 1)
			return true;
		for (int i = 1; i <= 31 ; i++)
		{
			if (n == pow(3,i))
				return true;
		};
		return false;
	}
};
