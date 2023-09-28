/**
  ******************************************************************************
  * @file           : quamtity_scope.cpp
  * @author         : b-zhushiyun
  * @brief          : 量的作用域与可见性
  * @attention      : None
  * @date           : 23-9-28
  ******************************************************************************
  */

#include "iostream"
#include "iomanip" // 制表
using namespace std;

int i;	/* 全局变量 i 作用域开始,可见 */
int func( int x );
int main()
{
    int n;	/* 局部变量 n 作用域开始,可见 */
    i = 10;	/* 全局变量 i 有效且可见 */
    cout << "i = " << setw(2) << i << "; n = " << n << endl;
    n = func( i );
    cout << "i = " << setw(2) << i << "; n = " << n << endl;
} /* 局部变量 n 作用域结束,不再可见 */
int n;	/* 全局变量 n 作用域开始,可见 */
int func( int x )	/* 形式参数 x 作用域开始,可见 */
{
    i = 0;	/* 全局变量 i 有效且可见 */
    cout << "i = " << setw(2) << i << "; n = " << n << endl;
    n = 20;	/* 全局变量 n 有效且可见 */
    {	/* 嵌套块开始 */
        int i = n + x; 	/* 局部变量 i、x 有效可见;全局变量 n 有效可见;全局变量 i 有效不可见 */
        cout << "i = " << setw(2) << i << "; n = " << n << endl;
    }	/* 局部变量 i 作用域结束,全局变量 i 有效且可见 */
    return ++i;
}	/* 局部变量 x 作用域结束,不再可见 */
/* 文件结束,全局变量 i、n 作用域结束 */