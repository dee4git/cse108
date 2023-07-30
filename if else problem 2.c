/* Write a code that
prints "divisible by 5 but not by 2 and its not 100 " if it is divisible by 5 but not by 2
prints "divisible by 10 or divisible by 3" if it is divisible by 10 or divisible by 3
prints "divisible by 15" if it is divisible by 15

let a = 150; */

#include<stdio.h>
int main()
{
    int a =3;
    if (a%5==0 && a%2 != 0 && a !=100 ) printf("\n div by 5 but not by 2 and not 100");
    if (a%10==0 || a%3==0 ) printf("\n div by 10 or divisible by 3");
    if (a%15==0) printf("\n div by 15");
}
