/**
  ******************************************************************************
  * @file           : practice01.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-7
  ******************************************************************************
  */
#include<iostream>
#include <cstring>

using namespace std;

class Name{

    char name[20];

public:

    Name(){

        strcpy (name,"");
        cout<<'?';

    }

    Name(char *fname){

        strcpy (name, fname);
        cout<<'?';

    }

};

int main(){

    Name names[3] ={Name("张三"),Name("李四")};

    return 0;

}