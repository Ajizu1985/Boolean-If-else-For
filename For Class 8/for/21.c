#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
   double a, b=5, sum=0, n1=1;
    for (a=1; a<=b; a++)
    {
        n1 *= 1/(a);
        sum += n1;

    }
    printf("%lf\n", sum);
    return 0;
}
