#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void ShiftRight3(int a, int b, int c);
void ShiftRight31(int a1, int b1, int c1);

int main () {
    int a=0, b=3, c=15, a1=4, b1=55, c1=79;
   
    ShiftRight3(a, b, c);
    ShiftRight31(a1, b1, c1);
    return 0;
}

void ShiftRight3(int a, int b, int c)
{
    int temp1, temp2, temp3;
    temp1 = a;
    temp2 =b;
    temp3 = c;
    b = temp1;
    c = temp2;
    a = temp3;
    printf("a=%d\nb=%d\nc=%d\n", a, b, c);
}

void ShiftRight31(int a1, int b1, int c1)
{
    int temp11, temp22, temp33;
    temp11 = a1;
    temp22 = b1;
    temp33 = c1;
    b1 = temp11;
    c1 = temp22;
    a1 = temp33;
    printf("a1=%d\nb1=%d\nc1=%d\n", a1, b1, c1);
}