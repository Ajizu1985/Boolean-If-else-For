#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int a, b=2, x=2;
    float sum=0;
    for (a=1; a<=b; a++){
        sum += (pow(x, a)/(a));
       
    }
    printf("%f\n", sum);
    return 0;
}