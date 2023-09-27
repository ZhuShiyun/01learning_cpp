/**
 * Created by b-zhushiyun on 23-9-27.
 * 判断素数v5
 * 【基于Linux的C++（1-10章）】
 * 这一版将求平方根的语句提到while循环外面，这样不需要每次循环都求一次平方根，加快了运算速度。
 */
#include "iostream"
#include "cmath"

using namespace std;
bool IsPrime(unsigned int n){
    unsigned int i = 3;
    unsigned int t = (unsigned int)sqrt(n) + 1; // 平方根只需要计算一次。
    if (n % 2 == 0)
        return false;
    while (i <= t){
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