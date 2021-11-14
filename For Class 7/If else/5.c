#include <stdio.h>
#include <math.h>

int main (){

    int num1=4, num2=-5, num3=2, a, b, c, x, y, z;
    if (num1 < 0 || num2 < 0 || num3 < 0) {
        if (num1 < 0) {
        x = 1;}
        if (num2 < 0) {
        y = 1;}
        if (num3 < 0) {
        z = 1;}
        printf("Amount of negative integers: %d\n", (x + y + z));
    }
   if (num1 > 0 || num2 > 0|| num3 > 0) {
        if (num1 > 0) {
            a = 1;}
        if (num2 > 0) {
            b = 1;}
        if (num3 > 0) {
            c = 1;}
        printf("Amount of positive integers: %d\n", (a + b + c));
   }
    return 0;
}
