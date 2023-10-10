/**
  ******************************************************************************
  * @file           : struct.c
  * @author         : b-zhushiyun
  * @brief          : W4 struct
  *                    【7：00】 https://www.bilibili.com/video/BV1Vf4y1P7pq?p=18&vd_source=385c8668128990a1175f24f4366f57fd
  * @attention      : None
  * @date           : 23-10-10
  ******************************************************************************
  */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//typedef
//struct _Student{
//    char name[4];
//    int born;
//    bool male;
//} Student;

struct Student{
    char name[4];
    int born;
    bool male;
};
int main()
{
    struct Student stu = {"Yu", 2000, true}; //initialization
    // strcpy(stu.name, "Yu");
    // stu.born = 2000;
    // stu.male = true;

    printf("Student %s, born in %d, gender %s\n",
           stu.name,
           stu.born,
           stu.male ? "male" : "female");

    struct Student students[100]; // 
    students[50].born = 2002;

    return 0;
}