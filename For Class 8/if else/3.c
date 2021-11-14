#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main () {

    int a=-1, result, result1, result2;

    result = a > 0;
    result1 = a < 0;
    result2 = a == 0;

    if (result)
    {
        printf("%d\n", a+1);}

    if (result1)
    {
        printf("%d\n", a-2);}
   if (result2)
    {
    printf("%d\n", a=10);
    }
 
    return 0;
}