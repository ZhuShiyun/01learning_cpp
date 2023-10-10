/**
  ******************************************************************************
  * @file           : arrmanip.h
  * @author         : b-zhushiyun
  * @brief          : 编写程序,随机生成8个10~99之间的整数保存到数组中,然后将这些元素颠倒过来
  *                   Randomly generate 8 integers between 10 and 99 and store them in the array,
  *                   then invert these elements
  * @attention      : None
  * @date           : 23-10-7
  ******************************************************************************
  */


void GenerateIntegers( int a[], unsigned int n, int lower, int upper );

void ReverseIntegers( int a[], unsigned int n );

void SwapIntegers( int a[], unsigned int i, unsigned int j );

void PrintIntegers( int a[], unsigned int n );

void Randomize();

int GenerateRandomNumber(int min, int max); // 随机整数

double GenerateRandomReal(double min, double max); // 随机实数


