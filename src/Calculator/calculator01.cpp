/**
  ******************************************************************************
  * @file           : calculator01.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : useable
  * @date           : 23-10-27
  ******************************************************************************
  */
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//class Calculator{
// public:
//	static int add(int a, int b){
//		while (b != 0){
//			int sum = 0;
//			int carry = 0;
//			sum = a ^ b;
//			carry = (a & b) << 1;
//			a = sum;
//			b = carry;
//		}
//		return a;
//	};
//
//	static int subtract(int a, int b){
//		return a - b;
//	};
//
//	static int multiply(int a, int b){
//		return a * b;
//	};
//
//	static int divide(int a, int b){
//		return a / b;
//	};
//};

//int main()
//{
//	string input="";
//	cin >> input;
//
//
//	return 0;
//}
int main() {

	std::string expression;
	while (true){
	std::cout << "/calculator ";
	std::getline(std::cin, expression);

	std::istringstream input(expression);
	int lhs, rhs;
	char op;

		if (expression == "q" | expression =="quit") {
			cout << "See you!";
			break;  // q or quit: exit.
		}


		if (input >> lhs >> op >> rhs)
		{
			if (op == '+')
			{
				int result = lhs + rhs;
				std::cout << expression << " = " << result << std::endl;
			}
			else if (op == '-')
			{
				int result = lhs - rhs;
				std::cout << expression << " = " << result << std::endl;
			}
			else if (op == '*')
			{
				int result = lhs * rhs;
				std::cout << expression << " = " << result << std::endl;
			}
			else if (op == '/')
			{
				int result = lhs / rhs;
				std::cout << expression << " = " << result << std::endl;
			}

		}
		else
		{
			std::cerr << "Unable to parse expression!" << std::endl;
		}

	}

	return 0;
}




