/**
  ******************************************************************************
  * @file           : exercise2.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-18
  ******************************************************************************
  */
  /*
   * Run the program and explain the result to SA.
   * You can write a program to check
   * whether you system is little-endian or big-endian.
   */
/*
 *
#include <stdio.h>
union data{
    int n;
    char ch;
    short m;
};
int main()
{
    union data a;
    printf("%d, %d\n", sizeof(a), sizeof(union data) );
    a.n = 0x40;
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
    a.ch = '9';
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
    a.m = 0x2059;
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
    a.n = 0x3E25AD54;
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
    return 0;
}

*/


#include <stdio.h>

int main() {
    unsigned int num = 1;
    char *byte = (char *)&num;

    if (*byte) {
        printf("Your system is Little-Endian.\n");
    } else {
        printf("Your system is Big-Endian.\n");
    }

    return 0;
}

