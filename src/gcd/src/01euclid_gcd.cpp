/**
  ******************************************************************************
  * @file           : 01euclid_gcd.cpp
  * @author         : b-zhushiyun
  * @brief          : 最大公约数函数 欧氏算法/辗转相除法
  *                     step1: x/y 记余数r
  *                     step2: 若r为零，则最大公约数为y,算法结束
  *                     step3: 否则，将y作为新x, 将r作为新y,重复上述步骤
  *
  * @attention      : None
  * @date           : 23-9-27
  ******************************************************************************
  */

#include <iostream>

using namespace std;
/**
 * @param x
 * @param y
 * @return y
 */
unsigned int gcd(unsigned int x, unsigned int y){
    unsigned int r;
    while (true){
        r = x % y;
        if (r == 0)
            return y;
        x = y;
        y = r;
    }
}

int main() {
    int a, b;
    cout << "Input:" << endl;
    cin >> a;
    cin >> b;

    int c = gcd(a,b);
    cout << c << endl;
    return 0;
}
