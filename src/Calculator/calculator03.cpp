/**
  ******************************************************************************
  * @file           : calculator03.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : unuseable
  * @date           : 23-10-27
  ******************************************************************************
  */
#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cout << "用法: " << argv[0] << " <操作数1> <操作符> <操作数2>" << std::endl;
		return 1;
	}

	double lhs, rhs, result;
	char op;
	std::istringstream lhsStream(argv[1]);
	std::istringstream opStream(argv[2]);
	std::istringstream rhsStream(argv[3]);

	if (!(lhsStream >> lhs) || !(opStream >> op) || !(rhsStream >> rhs)) {
		std::cerr << "The input should be [num] [operator] [num]!" << std::endl;
		return 1;
	}

	switch (op) {
	case '+':
		result = lhs + rhs;
		break;
	case '-':
		result = lhs - rhs;
		break;
	case '*':
		result = lhs * rhs;
		break;
	case '/':
		if (rhs == 0) {
			std::cerr << "A number cannot be divied by zero." << std::endl;
			return 1;
		}
		result = lhs / rhs;
		break;
	default:
		std::cerr << "Wrong operator: " << op << std::endl;
		return 1;
	}

	std::cout << argv[1] << " " << op << " " << argv[3] << " = " << result << std::endl;
	return 0;
}
