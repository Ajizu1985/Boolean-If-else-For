#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    double a, n=4, S, pw=0, checker, sum; 
    
    for(a = 1.1; a <= n; a+=0.1)
    {
   checker = a * pow (-1, pw);
    pw++;
    sum += checker;    
    printf("%lf\n", checker);
    }
    printf("Total: %lf\n", sum);
    return 0;
}
