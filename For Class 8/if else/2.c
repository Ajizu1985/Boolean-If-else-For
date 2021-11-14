#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main () {

    int a=2, result;

    result = a > 0;

    if (result)
    {
        printf("%d\n", a+1);}
    else {
    
    printf("%d\n", a-2);
    }
 
    return 0;
}