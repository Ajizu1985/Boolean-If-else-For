#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    double a, n=5, sum=0, checker, pw=0, A=2; 
    
    for(a = 0; a <= n; a++)
    {
    checker = pow (-A, pw);
    pw++;
    sum += checker;
     printf("%lf\n", checker);
    }
    printf("Total: %lf\n", sum);
    return 0;
}
