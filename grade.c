/* Create a grading system:
80-100 : A+
70-79: A
60-69: B
50- 59: C
40- 49: D
0- 39: F
else: invalid */
#include<stdio.h>
int main()
{
    int mark = 66;
    if (mark>100 || mark<0 ) printf("invalid");
    else if (mark>80) printf("A+");
    else if (mark>70) printf("A");
    else if (mark>60) printf("B");
    else if (mark>50) printf("C");
    else if (mark>40) printf("D");
    else if (mark<40) printf("F");

}
