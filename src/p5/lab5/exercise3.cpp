/**
  ******************************************************************************
  * @file           : exercise3.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-23
  ******************************************************************************
  */
/**
 * Run the program and explain the result to SA.
 */
#include <iostream>
using namespace std;
int main()
{
	int a[][4]={1,3,5,7,9,11,13,15,17,19};
	int *p=*(a+1);
	cout << "*p = " << *p << ", a+1 = " << (a+1) << endl;
	cout << "sizeof(a[0][0]) = " << sizeof(a[0][0]) << endl;
	p += 3;
	cout << "*p++ = " << *p++ << ",*p = " << *p << endl;
	const char *pc = "Welcome to programming.", *r;
	cout << "(*pc) = " << (*pc) << endl;
	long *q = (long *)pc;
	cout << "pc[0] = " << pc[0]  << ", Size of pc[0] = " << sizeof(pc[0]) << endl;
	q++;
	// cout << "*q = " << *q << endl;
	r = (char *)q;
	cout << r << endl;
	unsigned int m = 0x3E56AF67;
	unsigned short *pm = (unsigned short *) &m;
	cout << "*pm = " << hex << *pm << endl;
	return 0;
}
