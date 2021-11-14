#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main () {
    int a=1, b=1, x, y;
    bool num1, num2, num3;

    x = a;
    y = b;    
    num1 = (x && y-1) || (x && y+1) || (x-1 && y) || (x+1 && y); 
    num2 = (x+1 && y+1) || (x-1 && y-1) || (y-1 && x+1) || (y+1 && x-1);
  
    printf("%d\n", num1);
    printf("%d\n", !num2);


    return 0;
}