#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    double a, n=7, sum=1; 
    
    for(a = 1; a <= n; a++)
    {
    
    sum *= a;

    }
    printf("Total: %lf\n", sum);
    return 0;
}
