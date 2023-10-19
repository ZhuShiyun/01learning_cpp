/**
  ******************************************************************************
  * @file           : std_string.cpp
  * @author         : b-zhushiyun
  * @brief          : use std::string template to create a new type of string: bird_string.
  * @attention      : None
  * @date           : 23-10-18
  ******************************************************************************
  */
#include <iostream>
#include <string>

class bird_string {
public:
    // use std::string as the member of bird_string
    std::string value;

    // This is where you add custom member functions or extension functionality / 在这里添加自定义的成员函数或扩展功能
    // For example, add constructors, operator overload... / 如可以添加构造函数、操作符重载等

    bird_string(const char* str) : value(str) {}

    // 示例：自定义字符串拼接函数
    bird_string operator+(const bird_string& other) {
        bird_string result = *this;
        result.value += other.value;
        return result;
    }
};

int main() {
    bird_string myBirdString = "Hello, Bird!";
    bird_string anotherBirdString = "Welcome to the world of birds!";

    bird_string combinedBirdString = myBirdString + " " + anotherBirdString;

    std::cout << combinedBirdString.value << std::endl;

    return 0;
}

