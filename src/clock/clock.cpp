/**
  ******************************************************************************
  * @file           : clock.cpp
  * @author         : b-zhushiyun
  * @brief          : clock class practice.
  * @attention      : None
  * @date           : 23-10-7
  ******************************************************************************
  */

#include "iostream"
using namespace std;
class Clock {
    public:
        void setTime(int newH = 0, int newM = 0, int newS = 0);
        void showTime();
    private:
        int hour, minute, second;
};

void Clock::setTime(int newH, int newM, int newS) {
    hour = newH;
    minute = newM;
    second = newS;
}

void Clock::showTime() {
    cout << hour << ":" << minute << ":" << second;
}

int main() {
    Clock myclock;
    myclock.setTime(8,30,30);
    myclock.setTime(10);
    myclock.showTime();
    return 0;
}
