//
// Created by b-zhushiyun on 23-9-27.
//
#include "iostream"

using namespace std;

void Welcome();
int GetInteger(int idx);
int Add(int x, int y);
void Output(int sum);

int main(){
    int a, b, sum;
    Welcome();
    a = GetInteger(1);
    b = GetInteger(2);
    sum = Add(a, b);
    Output(sum);
    return 0;
}

void Welcome(){
    cout << "I am a calculater. Pls input numbers:" << endl;
}

int GetInteger(int idx){
    int t;
    cout << "No." << idx << ":" << endl;
    cin >> t;
    return t;
}

int Add(int x, int y){
    int t;
    t = x + y;
    return t;
}

void Output(int sum){
    cout << "The sum is:" << sum << endl;
}