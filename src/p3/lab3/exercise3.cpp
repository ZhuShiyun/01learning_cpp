/**
  ******************************************************************************
  * @file           : exercise3.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-18
  ******************************************************************************
  */
/*
 * 1 Design a struct “DayInfo” which contains two enumeration types as its member. The
 * first is an enum “Day” for (Sunday, Monday, ...), and the second is an enum “Weather”
 * for (Sunny, Rainy, ...).
 * 2 Define a boolean function “bool canTravel( DayInfo )” . It will return true if the day is
 * at weekend and the weather is good.
 * 3 Call function canTravel() in main().
 */

#include "iostream"

using namespace std;

enum Day {Sunday = 0, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
enum Weather {Sunny = 0, Rainy, Windy, Cloudy, Snowy};

struct DayInfo {
    Day day;
    Weather weather;
};

bool canTravel(DayInfo info){
    if (info.day == Sunday || info.day == Saturday){
        switch (info.weather) {
            case Sunny:
            case Cloudy:
                return true;
            case Rainy:
            case Windy:
            case Snowy:
                return false;
        }
    }
    else return false;
}

int main() {
    int dayInput;
    int weatherInput;
    cout << "What day is it today(0=Sunday, 1=Monday,..., 6=Saturday): " ;
    cin >> dayInput;
    cout << "What is the weather today(Sunny = 0, Rainy, Windy, Cloudy, Snowy): ";
    cin >> weatherInput;
    struct DayInfo info1 = {static_cast<Day>(dayInput),static_cast<Weather>(weatherInput)};
//    DayInfo info1;
//    info1.day = static_cast<Day>(dayInput);
//    info1.weather = static_cast<Weather>(weatherInput);

    if (canTravel(info1)){
        cout << "Let's go birding!" << endl;
    } else {
        cout << "Stay at home QAQ" << endl;
    }

    return 0;
}
