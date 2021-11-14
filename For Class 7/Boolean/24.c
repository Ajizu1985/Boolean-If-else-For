#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main () {

    int a = 1, b = -5, c = 6, result1;
    bool result2;

    result1 = (pow (b, 2) - 4*a*c);
    result2 = result1 > 0;
    
    printf("%d\n", result2);

    return 0;

}