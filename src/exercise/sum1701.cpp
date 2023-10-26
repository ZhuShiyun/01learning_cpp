/**
  ******************************************************************************
  * @file           : sum1701.cpp
  * @author         : b-zhushiyun
  * @brief          : Write a function that adds two numbers. You should not use + or any arithmetic operators.

Example:

Input: a = 1, b = 1
Output: 2
  * @attention      : None
  * @date           : 23-10-26
  ******************************************************************************
  */
class Solution {
 public:
	static int add(int a, int b){
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
