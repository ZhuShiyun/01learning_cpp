/**
  ******************************************************************************
  * @file           : prime_factorization.cpp
  * @author         : b-zhushiyun
  * @brief          : 质因数分解
  * @attention      : None
  * @date           : 23-11-8
  ******************************************************************************
  */
  /*
   * 质因数分解
   * 分解n个大于1的正整数的质因数，并以因子从小到大排序，以等式格式输出。比如
```
12=2*2*3
```
输入描述
第1行为一个整数n，表示需要进行分解的质因数的数量。(1<=n<=100)
第2行到第n+1行  为需要进行分解的n个正整数x_i。(1 < x_i < 10^9)

输出描述
共n行，每一行为分解质因数得到的等式，因子从小到大进行排列

示例1:
输入：
```
2
12
36
```
输出：
```
12=2*2*3
36=2*2*3*3
```
   */
#include <iostream>
#include <vector>

std::vector<int> primeFactors(int n) {
	std::vector<int> factors;
	while (n % 2 == 0) {
		factors.push_back(2);
		n = n / 2;
	}
	for (int i = 3; i * i <= n; i = i + 2) {
		while (n % i == 0) {
			factors.push_back(i);
			n = n / i;
		}
	}
	if (n > 2) {
		factors.push_back(n);
	}
	return factors;
}

int main() {
	int n;
	std::cin >> n;
	std::vector<int> numbers(n);
	for (int i = 0; i < n; i++) {
		std::cin >> numbers[i];
	}
	for (int i = 0; i < n; i++) {
		std::vector<int> factors = primeFactors(numbers[i]);
		std::cout << numbers[i] << "=";
		for (int j = 0; j < factors.size(); j++) {
			std::cout << factors[j];
			if (j != factors.size() - 1) {
				std::cout << "*";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
