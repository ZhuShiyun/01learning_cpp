/**
  ******************************************************************************
  * @file           : transform.cpp
  * @author         : b-zhushiyun
  * @brief          : 将字符转换为大写字符 Converts characters to uppercase characters
  * @attention      : None
  * @date           : 23-10-7
  ******************************************************************************
  */

#include "iostream"

char ToUppterCase(char c){
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    else
        return c;
}