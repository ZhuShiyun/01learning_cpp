/**
  ******************************************************************************
  * @file           : clock_constructor.cpp
  * @author         : b-zhushiyun
  * @brief          : 钟表类 + 构造函数
  * @attention      : None
  * @date           : 23-10-7
  ******************************************************************************
  */

#include "iostream"
using namespace std;
class Clock {
public:
    Clock(int newH, int newM, int newS); // 构造函数
    void setTime(int newH = 0, int newM = 0, int newS = 0);
    void showTime();
private:
    int hour, minute, second;
};

// 构造函数的实现
Clock::Clock(int newH, int newM, int newS):
    hour(newH), minute(newM), second(newS){ // 初始化列表
}

void Clock::setTime(int newH, int newM, int newS) {
    hour = newH;
    minute = newM;
    second = newS;
}

void Clock::showTime() {
    cout << hour << ":" << minute << ":" << second;
}

int main() {
    Clock c(0,0,0); // 自动调用构造函数
    c.showTime();
    return 0;
}
