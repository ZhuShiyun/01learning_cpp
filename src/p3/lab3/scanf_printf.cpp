/**
  ******************************************************************************
  * @file           : scanf_printf.c
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-17
  ******************************************************************************
  */
#include<stdio.h>

int main() {
    char str[20];
    printf("Enter a string: \n");
    scanf("%s", str);
    printf("You entered： %s", str);

    return 0;
}