#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main () {
    int x = 2, y=2;
    bool num1, num2;
    
    num1 = x-1 && y-1||x+1 && y+1||x-1 && y+1|| x+1 && y-1; 
    num2 = x+1 && y||x-1 && y||x && y+1|| x && y-1;
    printf("%d\n", num1);
    printf("%d\n", !num2);
    return 0;
}

