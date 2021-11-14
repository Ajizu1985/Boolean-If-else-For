#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void ShiftLeft3(int a, int b, int c);
void ShiftLeft31(int a1, int b1, int c1);

int main () {
    int a=0, b=3, c=15, a1=4, b1=55, c1=79;
   
    ShiftLeft3(a, b, c);
    ShiftLeft31(a1, b1, c1);
    return 0;
}

void ShiftLeft3(int a, int b, int c)
{
    int temp1, temp2, temp3;
    temp1 = a;
    temp2 = b;
    temp3 = c;
    a = temp2;
    b = temp3;
    c = temp1;
    printf("a=%d\nb=%d\nc=%d\n", a, b, c);
}

void ShiftLeft31(int a1, int b1, int c1)
{
    int temp11, temp22, temp33;
    temp11 = a1;
    temp22 = b1;
    temp33 = c1;
    a1 = temp22;
    b1 = temp33;
    c1 = temp11;
    printf("a1=%d\nb1=%d\nc1=%d\n", a1, b1, c1);
}