/**
  ******************************************************************************
  * @file           : clock_default_constructor.cpp
  * @author         : b-zhushiyun
  * @brief          : 默认构造函数
  * @attention      : None
  * @date           : 23-10-7
  ******************************************************************************
  */

#include "iostream"
using namespace std;
class Clock {
public:
    Clock(int newH, int newM, int newS); // 构造函数
    Clock(); // 默认构造函数
    void setTime(int newH = 0, int newM = 0, int newS = 0);
    void showTime();
private:
    int hour, minute, second;
};

// 构造函数的实现
Clock::Clock(int newH, int newM, int newS):
        hour(newH), minute(newM), second(newS){ // 初始化列表
}

// 默认构造函数
Clock::Clock(): hour(0),minute(0),second(0){}

void Clock::setTime(int newH, int newM, int newS) {
    hour = newH;
    minute = newM;
    second = newS;
}

void Clock::showTime() {
    cout << hour << ":" << minute << ":" << second << endl;
}

int main() {
    Clock c1(8,30,0); // 调用有参数的构造函数
    Clock c2; // 调用无参数的构造函数
    c1.showTime();
    c2.showTime();
    return 0;
}
