#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main () {
    int x = 1, y=1;
    bool num1;
    num1 = x && y-1 || x && y+1 ||x-1 && y|| x+1 && y|| x+1 && y+1|| x-1 && y-1||x-1 && y+1|| x+1 && y-1; 

    printf("%d = Yes\n", num1);

    return 0;
}
