/**
  ******************************************************************************
  * @file           : constructor.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-10
  ******************************************************************************
  */

#include<iostream>
#include "cstring"

using namespace std;

class Student{
private:
    char name[16];
    int born;
    bool male;
public:
    Student(){
        name[0] = 0;
        born = 0;
        male = false;
        cout << "Constructor: Person()" << endl;
    }
    Student(const char * initName):born(0), male(true){
        setName(initName);
        cout << "Constructor: Person(const char*)" << endl;
    }
    Student(const char * initName, int initBorn, bool isMale){
        setName(initName);
        born = initBorn;
        male = isMale;
        cout << "Constructor: Person(const char, int, bool)" << endl;
    }

    void setName(const char * s){
        strncpy(name, s, sizeof(name));
    }

    void setBorn(int b){
        born = b;
    }

    void setGender(bool isMale);
    void printInfo();
};
// The declarations, the declarations are out of the class.
void Student::setGender(bool isMale) {
    male = isMale;
}

void Student::printInfo() {
    cout << "Name: " << name << endl;
    cout << "Born in " << born << endl;
    cout << "Gender: " << (male ? "Male" : "Female") << endl;
}

int main() {
    Student li;
    li.printInfo();

    li.setName("Wangyi Li");
    li.setBorn(1997);
    li.setGender(false);
    li.printInfo();

    Student zh("Shiyun Zhu");
    zh.printInfo();

    Student yang = Student("Boyi Yang", 2013, false);
    yang.printInfo();

    Student * chen = new Student("Zhou", 1997, false);
    chen->printInfo();
    delete chen;

    return 0;
}