/**
  ******************************************************************************
  * @file           : box.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-7
  ******************************************************************************
  */

#include "iostream"

using namespace std;

class Box {
    public:
        double length;
        double breadth;
        double height;
        // 定义成员函数
        double get(void);
        void set(double len,double bre,double hei);
};

double Box::get() {
    return length * breadth * height;
}

void Box::set(double len, double bre, double hei) {
    length = len;
    breadth = bre;
    height = hei;
}

int main() {
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0; // to store volume(体积)


    Box1.set(10,10,10);
    cout << Box1.get() << endl;

    Box2.length = 3;
    Box2.breadth = 3;
    Box2.height = 3;
    Box2.set(6,3,3);
    volume = Box2.height * Box2.breadth * Box2.length;
    cout << volume << endl;

    Box3.length = 26;


    return 0;
}