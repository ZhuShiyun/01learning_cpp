/**
 * Created by b-zhushiyun on 23-9-27.
 * 判断素数v4
 * 【基于Linux的C++（1-10章）】 【精准空降到 06:38】
 * https://www.bilibili.com/video/BV1xv4y1t7gb/?p=22&share_source=copy_web&vd_source=ce7db4602809160957ede06f23353169&t=398
 */
#include "iostream"
#include "cmath"

using namespace std;
/**
 *
 * @param n
 * @return
 */
bool IsPrime(unsigned int n){
    unsigned int i = 3;
    if (n % 2 == 0)
        return false;
    /*
     * 和3的区别：+1 。sqrt将整数转化为小数，例如若将11转化成10.9999...,
     * 则转化成unsigned int时将忽略小数部分，使程序输出“11不是素数”的结果。
     * 旧计算机内容易出现此问题，新版暂未发现。
     * 见开头注释里的链接。
     */
    while (i <= (unsigned int)sqrt(n) + 1){
        if(n%i == 0)
            return false;
        i += 2;
    }
    return true;
}

int main(){
    int a = 0;
    cout << "Input:" << endl;
    cin >> a;
    if (IsPrime(a))
        cout << a << " is a prime number." << endl;
    else
        cout << a << " is not a prime number." << endl;
    return 0;
}