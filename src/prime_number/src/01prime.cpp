/**
 * zhushiyun
 * 判断素数v1
 */

#include "iostream"

using namespace std;
bool IsPrime(unsigned int n){
    unsigned int i = 2;
    while (i<n){
        if (n%i == 0)
            return false;
        i++;
    }
    return true;
}

int main(){
    int a = 18;
    for (int i = 2; i < a; i++) {
        if(IsPrime(i)){
            cout << i << endl;
        } else {
            continue;
        }
    }
    return 0;
}

