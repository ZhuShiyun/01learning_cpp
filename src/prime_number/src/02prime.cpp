/**
 * zhushiyun 20230927
 * 素数判断v2
 */
#include <iostream>
#include <cmath>
 bool IsPrime(unsigned int n){
     unsigned int i = 2;
     while (i <= (unsigned int)sqrt(n)){
         if (n%i == 0)
             return false;
             i++;
     }
     return true;
 }

 int main(){
     int a = 0;
     std::cout << "Input:" << std::endl;
     std::cin >> a;

     if(IsPrime(a))
         std::cout << a << " is a prime number." << std::endl;
     else
         std::cout << a << " is not a prime number." << std::endl;

     return 0;
 }
