#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int n=5, res;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
    res = pow (j, i);
    }  
    printf("%d\n", res);
    }
    return 0;
}