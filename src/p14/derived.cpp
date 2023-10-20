/**
  ******************************************************************************
  * @file           : derived.cpp
  * @author         : b-zhushiyun
  * @brief          : If an object is thrown, and its class is derived from another class.
                        An exception handler with the base class type can catch the exception.
  * @attention      : None
  * @date           : 23-10-20
  ******************************************************************************
  */
#include <iostream>

class Base
{
public:
    Base() {}
};

class Derived: public Base
{
public:
    Derived() {}
};

int main()
{
    try
    {
        throw Derived();
    }
    catch (const Base& base)
    {
        std::cerr << "I caught Base." << std::endl;
    }
    catch (const Derived& derived)
    { // never reach here, unless you exchange the positions of these two "catch"
        std::cerr << "I caught Derived." << std::endl;
    }

    return 0;
}
