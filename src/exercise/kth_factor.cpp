/**
  ******************************************************************************
  * @file           : kth_factor.cpp
  * @author         : b-zhushiyun
  * @brief          :
  * You are given two positive integers n and k.
  * A factor of an integer n is defined as an integer i where n % i == 0.
  * Consider a list of all factors of n sorted in ascending order,
  * return the kth factor in this list or return -1 if n has less than k factors.
  * @attention      : None
  * @date           : 23-10-30
  ******************************************************************************
  */

#include "iostream"
using namespace std;
class Solution {
 public:
	int kthFactor(int n, int k) {
		int count = 0;
		for (int i = 1; i <= n; i++){
			if (n % i == 0){
				count++;
				if (count == k){
					return i;
				}
			}
		}
		return  -1;
	}
};

int main()
{
	Solution solution;
	cout << "(n, k)" << solution.kthFactor(6,5);

	return 0;
}
