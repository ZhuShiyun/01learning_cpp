/**
  ******************************************************************************
  * @file           : max2.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-11-8
  ******************************************************************************
  */
  /*
   * 数学里有一个函数叫做max(a,b)，为a和b中更大的那一个。
   * 现在，请完成函数max2，要求返回当前遇见过的所有数字中，第二大的数字。
   * 你只能使用全局变量a1和a2来保存信息，不能使用数组来存储。
   * (允许再另外使用两个变量分别用于存储n和用于输入正整数)
   *
   * 输入描述
   * 第一行一个数字n，表示有n个正整数，2<=n<=100。
   * 第二行有n个正整数，分别是数列的n项，数列各项互不相等。
   *
   * 输出描述
   * 输出只有一行，一个整数，表示数列的第二大数字。
   *
   * 示例1:
   * 输入：10
   * 10 9 8 7 6 5 4 3 2 1
   * 输出：9
   */
#include <iostream>
using namespace std;

int a1, a2;

int max2() {
	int n;
	cin >> n;
	cin >> a1 >> a2;

	if (a1 < a2) {
		swap(a1, a2);
	}

	for (int i = 2; i < n; i++) {
		int num;
		cin >> num;

		if (num > a1) {
			a2 = a1;
			a1 = num;
		} else if (num > a2) {
			a2 = num;
		}
	}

	return a2;
}

int main() {
	int result = max2();
	cout << result << endl;

	return 0;
}

