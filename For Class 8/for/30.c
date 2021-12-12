#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float a=0, b=10, F;
    for(a=0; a<=b; a++){
     F = 1 - sin (a);
     printf("%f\n", F);
    }
    return 0;
}