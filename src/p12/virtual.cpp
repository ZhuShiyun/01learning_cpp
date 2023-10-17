/**
  ******************************************************************************
  * @file           : virtual.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-17
  ******************************************************************************
  */
#include "iostream"
#include "string"
using namespace std;

class Person {
    public:
        string name;
        Person(string n):name(n){}
        virtual void print(){
            cout << "Name: " << name << endl;
        }
};

class Person2 {
    public:
        string name;
        Person2(string n):name(n){}
        virtual void print() = 0;
};


class Student: public  Person{
    public:
        string id;
        Student(string n, string i): Person(n), id(i){}
        void print(){
            cout << "Name: " << name ;
            cout << ". ID: " << id << endl;
        }
};

void printObjectInfo(Person & p){
    p.print();
}

int main() {
    {
        Student stu("Zhu", "201100021");
        printObjectInfo(stu);
        stu.print();
    }

    {
        Person * p = new Student("E", "u7041419");
        p->print(); //if print() is not a virtual function, different output
        delete p; //if its destructor is not virtual
    }

    { // if you want to call a function in the base class
        Student stu("Li", "208808234");
        stu.Person::print();

        Person * p = new Student("E", "u7041419");
        p->Person::print();
        delete p;
    }

    return 0;
}

