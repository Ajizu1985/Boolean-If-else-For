#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main () {
    int a=5, b=3, c=5;
    bool num1, num2, num3;
    num1 = (a==b) && !(a==c) && !(b==c);
    num2 = (a==c) && !(a==b) && !(b==c);
    num3 = (b==c) && !(a==b) && !(a==c);
    
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
    return 0;
}