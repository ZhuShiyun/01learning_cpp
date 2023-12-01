/**
  ******************************************************************************
  * @file           : 06binary_tree.cpp
  * @author         : b-zhushiyun
  * @brief          : practice1: 由三个节点可以构造出多少种不同的二叉树？
  * @attention      : None
  * @date           : 23-12-1
  ******************************************************************************
  */
#include <iostream>

// 三个节点的二叉树有多少种？

using namespace std;

int main()
{
	int size = 3;
	int dp[size + 1];
	dp[0] = dp[1] = 1;
	for (int i = 2; i <= size; ++i) {
		dp[i] = 0;
		for (int j = 0; j < i; ++j) {
			dp[i] += dp[j] * dp[i - j - 1]; //内层循环是为了计算所有情况，比如i等于3，那么就从j = 0开始，计算dp[0]和dp[2]的结果，再计算dp[1]和dp[1]...
		}
	}
	cout << dp[size] << endl;

	return 0;
}
