/**
  ******************************************************************************
  * @file           : map_phonebook.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-12
  ******************************************************************************
  */
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string,int> phone_book; // 创建一个map类容器，用于存储电话号码簿

    // 创建电话簿
    phone_book["wang"] = 12345678; // 通过[]操作和关键字往容器中加入元素
    phone_book["li"] = 87654321;
    phone_book["zhang"] = 56781234;
    // ......  还可以添加更多的信息
    // 输出电话号码簿
    cout << "电话号码簿的信息如下：\n";
    for (pair<string, int> item: phone_book)
        // C++11中引入的enhanced-for loop
        cout << item.first << ": " << item.second << endl;
    // 输出元素的姓名和电话号码

    // 查找某个人的电话号码
    string name;
    cout << "请输入要查询号码的姓名：";
    cin >> name;
    map<string,int>::const_iterator it; // 创建一个不能修改所指向的元素的迭代器
    it = phone_book.find(name); // 查找关键字为name的容器元素
    if (it == phone_book.end()) // 判断是否找到
        cout << name << ": not found\n"; // 未找到
    else
        cout << it->first << ": " << it->second << endl; // 找到
    return 0;
}
