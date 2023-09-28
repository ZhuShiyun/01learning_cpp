/**
  ******************************************************************************
  * @file           : move_hanoi.cpp
  * @author         : b-zhushiyun
  * @brief          : 汉诺塔
  * @attention      : None
  * @date           : 23-9-27
  ******************************************************************************
  */

/*
 * 伪代码：
 * void MoveHanoi(unsigned int n, HANOI from, HANOI tmp, HANOI to){
 *      if(n == 1)
 *          将一个圆盘从from移动到to
 *      else{
 *          将n-1个圆盘从from以to为中心移动到tmp
 *          将圆盘n从from移动到to
 *          将n-1个圆盘从tmp以from为中转移动到to
 *      }
 * }
 */

#include "iostream"

using namespace std;

/*
 * 还未完成这些函数
 */
typedef enum {X, Y, Z} HANOI;
void PrintWelcomeInfo();
unsigned int GetInteger();
void MoveHanoi(unsigned int n, HANOI from,HANOI tmp, HANOI to);
char ConvertHanoiToChar(HANOI x);
void MovePlate(unsigned int n, HANOI from, HANOI to);

int main() {
    unsigned int n;
    PrintWelcomeInfo();
    n = GetInteger();
    MoveHanoi(n, X, Y, Z);
    return 0;
}