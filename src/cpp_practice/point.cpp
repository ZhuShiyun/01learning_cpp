/**
  ******************************************************************************
  * @file           : point.cpp
  * @author         : b-zhushiyun
  * @brief          : 例 4-2 Point 类的完整程序
  * @attention      : None
  * @date           : 23-10-8
  ******************************************************************************
  */
#include "iostream"
using namespace std;

class Point { //Point 类的定义
public:
    Point(int xx=0, int yy=0) { x = xx; y = yy; } //构造函数，内联
    Point(const Point& p); //复制构造函数
    void setX(int xx) {x=xx;}
    void setY(int yy) {y=yy;}
    int getX() const { return x; } //常函数（第5章）
    int getY() const { return y; } //常函数（第5章）
private:
    int x, y; //私有数据
};
//复制构造函数的实现
Point::Point (const Point& p) {
    x = p.x;
    y = p.y;
    cout << "Calling the copy constructor " << endl;
}
//形参为Point类对象
void fun1(Point p) {
cout << p.getX() << endl;
}
//返回值为Point类对象
Point fun2() {
Point a(1, 2);
return a;
}
int main() {
    Point a(4, 5);
    Point b(a); //用a初始化b。
    cout << b.getX() << endl;
    fun1(b); //对象b作为fun1的实参
    b = fun2(); //函数的返回值是类对象
    cout << b.getX() << endl;
    return 0;
}
