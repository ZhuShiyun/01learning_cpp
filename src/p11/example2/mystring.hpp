/**
  ******************************************************************************
  * @file           : mystring.hpp
  * @author         : b-zhushiyun
  * @brief          : dynamic memory example2
  * @attention      : No exist memory leak, example1 fixed
  * @date           : 23-10-12
  ******************************************************************************
  */

#pragma once
#include <iostream>
#include <cstring>

class MyString {
private:
    int buf_len;
    char * characters;
public:
    MyString(int buf_len = 64, const char * data = NULL){
        std::cout << "Constructor(int, char*)" << std::endl;
        this->buf_len = 0;
        this->characters = NULL;
        create(buf_len, data); // request memory.
    }
    /*
     * Copy constructor
     */
    MyString(const MyString & ms){
        std::cout << "Constructor(MyString&)" << std::endl;
        this->buf_len = 0;
        this->characters = NULL;
        create(ms.buf_len, ms.characters);
    }
    ~MyString(){
        release();
    }
    MyString & operator=(const MyString &ms)
    {
        create(ms.buf_len, ms.characters);
        return *this;
    }
    bool create(int buf_len,  const char * data)
    {
        release();

        this->buf_len = buf_len;

        if( this->buf_len != 0)
        {
            this->characters = new char[this->buf_len]{};
        }
        if(data)
            strncpy(this->characters, data, this->buf_len);

        return true;
    }
    bool release()
    {
        this->buf_len = 0;
        if(this->characters!=NULL)
        {
            delete []this->characters;
            this->characters = NULL;
        }
        return 0;
    }
    friend std::ostream & operator<<(std::ostream & os, const MyString & ms)
    {
        os << "buf_len = " << ms.buf_len;
        os << ", characters = " << static_cast<void*>(ms.characters);
        os << " [" << ms.characters << "]";
        return os;
    }
};

