/**
  ******************************************************************************
  * @file           : functor02.cpp
  * @author         : b-zhushiyun
  * @brief          : Student类
  * @attention      : 思考：学生包含学号，姓名属性，现要求任意插入几个学生对象到set容器中，使得容器中的学生按学号的升序排序。
  * @date           : 23-11-24
  ******************************************************************************
  */

#include <iostream>
#include <set>
#include "printContainer.hpp"

using namespace std;

//学生类
class CStudent
{
 public:
	CStudent(int iID, string strName) //构造函数
	{
		m_iID = iID;
		m_strName = strName;
	}
	int m_iID; //学号
	string m_strName; //姓名
};

//仿函数类
class CompareStudent
{
 public:
	bool operator()(const CStudent &student1, const CStudent &student2)
	{
		return student1.m_iID < student2.m_iID;
	}
};


int main(){
	// 定义一个容器实现存储学生信息
	set<CStudent, CompareStudent> stu;
	/*
	 * 内部实现的伪代码：
	 * CompareStudent compareStudent;
	 * bool b = compareStudent(student1, student2);
	 *
	 */

	// 插入学生信息
	stu.insert(CStudent(10, "张三"));
	stu.insert(CStudent(25, "李四"));
	stu.insert(CStudent(32, "王五"));
	stu.insert(CStudent(14, "赵六"));
	stu.insert(CStudent(55, "孙七"));

	// 遍历学生信息
	set<CStudent, CompareStudent>::iterator iter;
	for (iter = stu.begin(); iter != stu.end(); iter++)
	{
		cout << iter->m_iID << " " << iter->m_strName << endl;
	}
	cout << endl;


	return 0;
}