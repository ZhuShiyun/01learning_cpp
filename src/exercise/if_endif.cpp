/**
  ******************************************************************************
  * @file           : if_endif.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-11-13
  ******************************************************************************
  */
#include <iostream>
#define MAX 0
int main()
{
	printf("MAX = %d\n", MAX);
	#if MAX == 10
		printf("MAX已经被定义为10了\n");
}
	#else
{
	printf("MAX没有被定义");
#undef MAX;
}