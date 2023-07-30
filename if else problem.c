/* Write a code that
prints "divisible by 5" if it is divisible by 5
prints "divisible by 10" if it is divisible by 10
prints "divisible by 15" if it is divisible by 15

let a = 150; */

#include<stdio.h>
int main()
{
    int a =150;
    if (a%5==0) printf("\n div by 5");
    if (a%10==0) printf("\n div by 10");
    if (a%15==0) printf("\n div by 15");
}
