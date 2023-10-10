/**
  ******************************************************************************
  * @file           : pointer_struct.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : Structure member accessing:
  *                     p->mumber
  *                     (*p).member
  * @date           : 23-10-8
  ******************************************************************************
  */
#include "iostream"
#include <cstring>

using namespace std;

struct Student{
    char name[8];
    int born;
    bool male;
};

int main() {
    Student stu = {"Emma", 2000, false};
    Student * pStu = &stu;

    cout << stu.name << " was born in " << stu.born
         << ". Gender: " << (stu.male ? "male" : "female") << endl;

    strncpy(pStu->name,"Lily",8);
    pStu->born = 2001;
    (*pStu).born = 2003;
    pStu->male = true;

    cout << stu.name << " was born in " << stu.born
         << ". Gender: " << (stu.male ? "male" : "female") << endl;

     // Since the value of a pointer is an address, we can print it out:
    printf("Address of stu: %p\n", pStu); // C style
    cout << "Address of stu: " << pStu << endl; // C++ Style
    cout << "Address of stu: " << &stu << endl;
    cout << "Address of member name: " << &(pStu->name) << endl;
    cout << "Address of member born: " << &(pStu->born) << endl;
    cout << "Address of member male: " << &(pStu->male) << endl;
    // The address should be an unsigned 32-bit or 64-bit integer:
    cout << "sizeof(pStu) = " << sizeof(pStu) << endl;

    return 0;
}