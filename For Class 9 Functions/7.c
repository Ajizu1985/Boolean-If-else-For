#include <stdio.h>
#include <math.h>
#include <stdlib.h>

   void InvertDigit(int, int, int);
   
int main () {
    int a=1555, b=879, c=551; 
    
   InvertDigit(a, b, c);

    return 0;
}

void InvertDigit(int a, int b, int c)
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
