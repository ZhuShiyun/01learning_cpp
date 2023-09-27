/**
 * Created by b-zhushiyun on 23-9-27.
 * 判断素数v3
 */
#include "iostream"
#include "cmath"

using namespace std;
bool IsPrime(unsigned int n){
    unsigned int i = 3;
    if (n % 2 == 0)
        return false;
    while (i <= (unsigned int)sqrt(n)){
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