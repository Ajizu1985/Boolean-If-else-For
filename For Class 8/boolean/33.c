#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main () {
    int a = -5, b=5, c =5;
    bool num1;
    
    num1 = a > 0 && b > 0 & c >0;
    printf("%d\n", num1);

    return 0;
}