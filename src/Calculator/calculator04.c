/**
  ******************************************************************************
  * @file           : calculator04.c
  * @author         : b-zhushiyun
  * @brief          : Project01: A simple calculator
  * @attention      : useable
  * @date           : 23-10-27
  ******************************************************************************
  */
#include <stdio.h>
#include <stdlib.h>

// Function to perform addition
double add(double a, double b) {
	return a + b;
}

// Function to perform subtraction
double subtract(double a, double b) {
	return a - b;
}

// Function to perform multiplication
double multiply(double a, double b) {
	return a * b;
}

// Function to perform division
double divide(double a, double b) {
	if (b == 0) {
		printf("A number cannot be divided by zero.\n");
		exit(EXIT_FAILURE);
	}
	return a / b;
}

int main(int argc, char *argv[]) {
	if (argc != 4) {
		printf("Usage: %s <num1> <operation> <num2>\n", argv[0]);
		return EXIT_FAILURE;
	}

	double num1, num2, result;
	char operation = argv[2][0];

	// Convert command line arguments to numbers
	if (sscanf(argv[1], "%lf", &num1) != 1 || sscanf(argv[3], "%lf", &num2) != 1) {
		printf("The input cannot be interpreted as numbers!\n");
		return EXIT_FAILURE;
	}

	// Perform the requested operation
	switch (operation) {
	case '+':
		result = add(num1, num2);
		break;
	case '-':
		result = subtract(num1, num2);
		break;
	case '*':
		result = multiply(num1, num2);
		break;
	case '/':
		result = divide(num1, num2);
		break;
	default:
		printf("Invalid operation: %c\n", operation);
		return EXIT_FAILURE;
	}

	// Print the result
	printf("%g %c %g = %g\n", num1, operation, num2, result);

	return EXIT_SUCCESS;
}

