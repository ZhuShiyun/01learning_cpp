/**
  ******************************************************************************
  * @file           : this.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
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
    Student(const char* name, int born, bool male){
        this->name = new char[1024];
        setName(name);// also we can add `this->` before `setName(name)`
        this->born = born;
        this->male = male;
        cout << "Constructor: Person(const char, int, bool" << endl;
    }
    ~Student(){
        cout << "To destroy object: " << name << endl;
        delete []name;
    }

    void setName(const char * name){
        strncpy(this->name, name, 1024);
    }

    void setBorn(int born){
        this->born = born;
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

int main()
{
    Student * class1 = new Student[3]{
            {"Tom", 2000, true},
            {"Bob", 2001, true},
            {"Amy", 2002, false},
    };

    class1[1].printInfo();
    delete []class1;


    return 0;
}