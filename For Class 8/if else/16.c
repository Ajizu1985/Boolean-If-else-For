#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main () {

    int a=-1, b=5, c=4;
    if (c > b && b > a) 
    {printf("%d\n", 2*a);
    printf("%d\n", 2*b);
    printf("%d\n", 2*c);
    }
    else {   
    printf("%d\n", a);
    printf("%d\n", b);    
    printf("%d\n", c);
    }
    
    return 0;
}