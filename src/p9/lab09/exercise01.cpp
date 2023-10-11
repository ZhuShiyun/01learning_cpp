/**
  ******************************************************************************
  * @file           : exercise01.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-11
  ******************************************************************************
  */
  /**
   * Can the program below be run successfully? Why? How to modify it? Can the display()
   * function be invoked by the Demo class instead of an object of Demo?
   * You need to explain the reason to a SA to pass the test.
   */
#include <iostream>
using namespace std;
class Demo
{
public :
    // static int num;
    int num;
    void display()
    {
        cout << "The value of the static member variable num is: " << num <<endl;
    }
};
int main()
{
    Demo obj;
    obj.display();

    Demo obj2 = Demo();
    obj2.display();

    return 0;
}