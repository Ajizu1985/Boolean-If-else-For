#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void SortDec3(int a, int b, int c);
void SortDec31(int a1, int b1, int c1);

int main () {
    int a=46, b=3, c=0, a1=57, b1=55, c1=-14;
    printf("Enter the digit: ");
    scanf("%d\n%d\n%d\n%d\n%d\n%d\n", &a, &b, &c, &a1, &b1, &c1);
   
    SortDec3(a, b, c);
    SortDec31(a1, b1, c1);
    return 0;
}

void SortDec3(int a, int b, int c)
{
if (a > b && a > c && b > c)
{
printf("c=%d\nb=%d\na=%d\n", c, b, a);
        }
if (a > b && a > c && c > b) {
 printf("b=%d\nc=%d\na=%d\n", b, c, a);
}
if (b > a && b > c && c > a) {
printf("a=%d\nc=%d\nb=%d\n", a, c, b);
}
if (b > a && b > c && a > c) {
printf("c=%d\na=%d\nb=%d\n", c, a, b);
}
if (c > a && c > b && b > a) {
printf("a=%d\nb=%d\nc=%d\n", a, b, c);
}
if (c > a && c > b && a > b) {
printf("b=%d\na=%d\nc=%d\n", b, a, c);
}
}

void SortDec31(int a1, int b1, int c1)
{
if (a1 > b1 && a1 > c1 && b1 > c1)
{
printf("c1=%d\nb1=%d\na1=%d\n", c1, b1, a1);
        }
if (a1 > b1 && a1 > c1 && c1 > b1) {
 printf("b1=%d\nc1=%d\na1=%d\n", b1, c1, a1);
}
if (b1 > a1 && b1 > c1 && c1 > a1) {
printf("a1=%d\nc1=%d\nb1=%d\n", a1, c1, b1);
}
if (b1 > a1 && b1 > c1 && a1 > c1) {
printf("c1=%d\nb1=%d\na1=%d\n", c1, a1, b1);
}
if (c1 > a1 && c1 > b1 && b1 > a1) {
printf("ca1=%d\nb1=%d\nc1=%d\n", a1, b1, c1);
}
if (c1 > a1 && c1 > b1 && a1 > b1) {
printf("b1=%d\na1=%d\nc1=%d\n", b1, a1, c1);
}
}
