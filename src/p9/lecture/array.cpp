/**
  ******************************************************************************
  * @file           : array.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : Note the difference between `delete []class1` and `delete class1`
  * @date           : 23-10-10
  ******************************************************************************
  */
#include "iostream"
#include "cstring"

using namespace std;

class Student{
private:
    /*
     *Different with constructor.cpp, here we add a pointer instead of `char name[16];`,
     * then apply for a large memory for `name` in constructor and initialized `name` as 0.
     */
    char * name;
    int born;
    bool male;
public:
    Student(){
        name = new char[1024]{};
        born = 0;
        male = false;
        cout << "Constructor: Person()" << endl;
    }
    Student(const char* initName, int initBorn, bool isMale){
        name = new char[1024];
        setName(initName);
        born = initBorn;
        male = isMale;
        cout << "Constructor: Person(const char, int, bool" << endl;
    }
    ~Student(){
        cout << "To destroy object: " << name << endl;
        delete []name;
    }

    void setName(const char * s){
        strncpy(name, s, 1024);
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
    Student * class1 = new Student[4]{
            {"Tom", 2000, true},
            {"Emma", 2001, false},
            {"Helen", 1999, false},
    };

    class1[1].printInfo();
    delete []class1;
    // delete class1;

    return 0;
}