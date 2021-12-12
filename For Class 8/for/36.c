#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int n=10, res, k=2;

    for(int i=1; i<n; i++){
    res = pow (i, k);
    printf("%d\n", res);
    }
    return 0;
}