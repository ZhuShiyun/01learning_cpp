/**
  ******************************************************************************
  * @file           : pow.cpp
  * @author         : b-zhushiyun
  * @brief          : Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
  * @attention      : None
  * @date           : 23-10-26
  ******************************************************************************
  */

#include "iostream"
class Solution {
    public:
        double quickMul(double x, long long N){
			double y = 0;
			if(N == 0){
				return 1;
			}
			y = quickMul(x, N/2);
			if(N%2 == 0){
				return y * y;
			}
			else return y * y * x;
		}
		double myPow(double x,long long n){
			if (n >= 0)
				return quickMul(x,n);
			else
				return 1.0/ quickMul(x,n);
		}
};

int main()
{
	float x = 2;
	long long n = 10;
	Solution solution;
	std::cout << solution.myPow(x, n) << std::endl;

	return 0;
}
