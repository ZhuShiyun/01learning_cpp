/**
  ******************************************************************************
  * @file           : 02exercise1.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-16
  ******************************************************************************
  */
#include <stdio.h>
int main()
{
    signed char a = 127;
    unsigned char b = 0xff; // 十六进制， 十进制=255
    unsigned char c = 0;
    a++;
    b++;
    c--;
    printf("a=%d\nb=%d\nc=%d\n",a,b,c);
    return 0;
}
