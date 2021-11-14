#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main () {
    int a =4, b=6, x, y;
    bool num1;
    x = a; 
    y = b;
    num1 = x && y-1 || x && y+1 ||x-1 && y|| x+1 && y|| x+1 && y+1|| x-1 && y-1||x-1 && y+1|| x+1 && y-1; 

    printf("%d\n", num1);

    return 0;
}