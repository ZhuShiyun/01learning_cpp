//
// Created by b-zhushiyun on 23-9-27.
//
/**
 * 泛型编程 模板
 */
#include "iostream"
#include "string"

using namespace std;

template<typename T>
void Swap(T &param1, T &param2){
    T t = param1;
    param1 = param2;
    param2 = t;
}

// 模板特化，针对 string 类型进行特殊处理 非必须
//template<>
//void Swap(string &str1, string &str2){
//    string temp = str1;
//    str1 = str2;
//    str2 = temp;
//}

int main(){
//    setlocale(LC_ALL,"");

    float a = 2.7;
    float b = 10.4;
    Swap(a,b);
    cout << "a:" << a << "b:" << b << endl;

    string c = "鹊鸲";
    string d = "黑卷尾";
    Swap(c,d);
    cout << c << d << endl;
    return 0;
}
