#include<stdio.h>
int main ()
{
    // unery operators
    int a = 10;
    a++; //a= a+1
    printf("\n%d", a); // 11
    a--;
    // arithmetic operator
    printf("\n%d", a); // 10
    a+=100;     // a = a+100;
    printf("\n%d", a);
    a-=100;     // a = a-100;
    printf("\n%d", a);
    a*=100;     // a = a*100;
    printf("\n%d", a);
    a/=100;     // a = a/100;
    printf("\n%d", a); // 10
    a%=2;
    printf("\n%d", a); // 10
}
