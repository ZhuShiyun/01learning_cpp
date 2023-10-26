/**
  ******************************************************************************
  * @file           : sum.cpp
  * @author         : b-zhushiyun
  * @brief          :
 * Given two integers a and b, return the sum of the two integers without using the operators + and -.
 *
 * Example 1:
 * Input: a = 1, b = 2
 * Output: 3
 * Example 2:
 * Input: a = 2, b = 3
 * Output: 5
 * Constraints: -1000 <= a, b <= 1000
  * @attention      : None
  * @date           : 23-10-26
  ******************************************************************************
  */
#include <iostream>
using namespace std;

class Solution {
    public:
        static int sum(int a, int b){
			while (b != 0){
				int sum = 0;
				int carry = 0;
				sum = a ^ b;
				carry = (a & b) << 1;
				a = sum;
				b = carry;
			}
			return a;
		};
};


int main()
{
	int a = -1000;
	int b = 800;
	class Solution sumsum;
	std::cout << Solution::sum(a, b) << std::endl;

	return 0;
}

