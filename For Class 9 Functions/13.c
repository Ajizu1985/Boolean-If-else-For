#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void SortInc3(int a, int b, int c);
void SortInc31(int a1, int b1, int c1);

int main () {
    int a=0, b=3, c=15, a1=4, b1=55, c1=79;
    printf("Enter the digit: ");
    scanf("%d\n%d\n%d\n%d\n%d\n%d", &a, &b, &c, &a1, &b1, &c1);
   
    SortInc3(a, b, c);
    SortInc31(a1, b1, c1);
    return 0;
}

void SortInc3(int a, int b, int c)
{
if (a > b && a > c && b > c)
{
printf("a=%d\nb=%d\nc=%d\n", a, b, c);
        }
if (a > b && a > c && c > b) {
 printf("a=%d\nc=%d\nb=%d\n", a, c, b);
}
if (b > a && b > c && c > a) {
printf("b=%d\nc=%d\na=%d\n", b, c, a);
}
if (b > a && b > c && a > c) {
printf("b=%d\na=%d\nc=%d\n", b, a, c);
}
if (c > a && c > b && b > a) {
printf("c=%d\nb=%d\na=%d\n", c, b, a);
}
if (c > a && c > b && a > b) {
printf("c=%d\na=%d\nb=%d\n", c, a, b);
}
}

void SortInc31(int a1, int b1, int c1)
{
if (a1 > b1 && a1 > c1 && b1 > c1)
{
printf("a1=%d\nb1=%d\nc1=%d\n", a1, b1, c1);
        }
if (a1 > b1 && a1 > c1 && c1 > b1) {
 printf("a1=%d\nc1=%d\nb1=%d\n", a1, c1, b1);
}
if (b1 > a1 && b1 > c1 && c1 > a1) {
printf("b1=%d\nc1=%d\na1=%d\n", b1, c1, a1);
}
if (b1 > a1 && b1 > c1 && a1 > c1) {
printf("b1=%d\na1=%d\nc1=%d\n", b1, a1, c1);
}
if (c1 > a1 && c1 > b1 && b1 > a1) {
printf("c1=%d\nb1=%d\na1=%d\n", c1, b1, a1);
}
if (c1 > a1 && c1 > b1 && a1 > b1) {
printf("c1=%d\na1=%d\nb1=%d\n", c1, a1, b1);
}
}
