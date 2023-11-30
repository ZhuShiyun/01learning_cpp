/**
  ******************************************************************************
  * @file           : 03newton_method.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-11-30
  ******************************************************************************
  */

#include <iostream>
#include <cmath>
#include <stdio.h>
#include <assert.h>

// 源代码来自于《雷神之锤》
//float Q_rsqrt( float number ) {
//	long i; float x2, y; const float threehalfs = 1.5F;
//	x2 = number * 0.5F;
//	y = number;
//	i = * ( long * ) &y; // evil floating point bit level hacking
//	i = 0x5f3759df - ( i >> 1 ); // what the fuck?
//	y = * ( float * ) &i;
//	y = y * ( threehalfs - ( x2 * y * y ) ); // 1st iteration
//	// y = y * ( threehalfs - ( x2 * y * y ) ); // 2nd iteration, this can be removed
//#ifndef Q3_VM #
//	ifdef __linux__ assert( !isnan(y) ); // bk010122 - FPE?
//#endif
//#endif return y;
//}

/**
 * Calculates the square root of a given number.
 * This function uses an optimized version of the Newton's method.
 *
 * @param x The number for which the square root is to be calculated.
 * @return The square root of the given number.
 */
float Q_sqrt(float x) { // 雷神之锤的改装版
	if(x == 0) return 0;
	float result = x;
	float xhalf = 0.5f*result;
	int i = *(int*)&result;
	i = 0x5f375a86- (i>>1); // what the fuck?
	result = *(float*)&i;
	result = result*(1.5f-xhalf*result*result); // Newton step, repeating increases accuracy
	result = result*(1.5f-xhalf*result*result);
	return 1.0f/result;
}

const float EPS = 0.00001;
int N_sqrt(double x) {  // 牛顿法求平方根
	if(x == 0) return 0;
	double result = x; /*Use double to avoid possible overflow*/
	double lastValue;
	do{
		lastValue = result;
		result = result / 2.0f + x / 2.0f / result;
	}while(abs(result - lastValue) > EPS);
	return (double)result;
}

float InvSqrt(float x) // from Lomont
{
	float xhalf = 0.5f*x;
	int i = *(int*)&x; // get bits for floating VALUE
	i = 0x5f375a86- (i>>1); // gives initial guess y0
	x = *(float*)&i; // convert bits BACK to float
	x = x*(1.5f-xhalf*x*x); // Newton step, repeating increases accuracy
	return x;
}


int main()
{
	float n = 50;
//	调用Q_sqrt, 保留小数点后6位
	float result = Q_sqrt(n);
	std::cout << result << std::endl;

	for (int i = 1000; i < 50000; i++)
	{
		std::cout << Q_sqrt(i) << std::endl;
	}

	return 0;
}