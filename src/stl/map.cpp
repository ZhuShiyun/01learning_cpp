/**
  ******************************************************************************
  * @file           : map.cpp
  * @author         : b-zhushiyun
  * @brief          : map
  * @attention      : None
  * @date           : 23-11-24
  ******************************************************************************
  */

#include <iostream>
#include <map>

using namespace std;

class Student
{
 public:
	int id;
	string name;

	Student(){}

	// 带参数的构造函数
	Student(int id, string name)
	{
		this->id = id;
		this->name = name;
	}

	// 重载输出运算符
	friend ostream &operator << (ostream &out, Student &stu)
	{
		out << stu.name;
	}
};

int main()
{
	// 构造一个map容器对象，存储student对象
	map<int, Student> stus;
	map<int, string> mapS;

	/// @brief 情况一：简单的基本类型--------------------------------------
	// 插入数据
	// mapS.insert(pair(3, "小张")); // 错误输入
	/*
	 * 编译报错：
	 * map.cpp: In function ‘int main()’:
	 * map.cpp:40:18: error: missing template arguments before ‘(’ token
	 * mapS.insert(pair(3, "小张"));
	 */
	mapS.insert(pair<int, string>(3, "小张")); // 3是key，小张是value
	mapS.insert(pair<int, string>(4, "小王"));

	mapS.insert(map<int, string>::value_type(5, "小李")); // 通过value_type插入

	mapS[7] = "小赵"; // 通过map类中[]的重载

	int key;
	string name;
	key = 1;
	name = "小周";
	pair<int, string> p(key, name);
	mapS.insert(p); // 通过pair插入

	/// @brief 情况二： 常见情况-自定义类型---------------------------------
	Student stu1(1001, "小李");
	stus.insert(pair<int, Student>(1001, stu1)); // 通过pair插入

	Student stu2(1002, "小王");
	stus.insert(map<int, Student>::value_type(1002, stu2)); // 通过value_type插入

	Student stu3(1003, "小赵");
	stus[stu3.id] = stu3; // 通过map类中[]的重载,类似数组赋值

	// 遍历map容器
	map<int, string>::iterator it1;
	for (it1 = mapS.begin(); it1 != mapS.end(); it1++)
	{
		pair<int, string> p = *it1;
		int key = p.first;
		string value = p.second;

		cout << key << " : " << value << endl;
	}

	cout << "----------------------" << endl;
	map<int, Student>::iterator it2;
	for (it2 = stus.begin(); it2 != stus.end(); it2++)
	{
		pair<int, Student> p = *it2;
		int key = p.first;
		Student stu = p.second;

		// cout << key << " : " << stu << endl; 不行，需要重载输出运算符
		// cout << key << " : " << " " << stu.name << endl; // 可以，但是不好看
		// 在student类中重载输出运算符
		cout << key << " : " << stu << endl; // 现在可以啦
	}


	return 0;
}
