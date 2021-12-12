#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    double a, n=10, sum=0, checker, A=2; 
    
    for(a = 1; a <= n; a++)
    {
    checker = pow (-A, a);
    sum += checker;
     printf("%lf\n", checker);
    }
   printf("Total: %lf\n", sum);
    return 0;
}
