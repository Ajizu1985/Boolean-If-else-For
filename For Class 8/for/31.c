#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float n=10, arr[10];
    arr[0]=2;
    for(int i=1; i<=n; i++){
    arr[i]= 2 + (1/(arr[i-1]));
    printf("arr[%d]=%f\n", i, arr[i]);
    }
    return 0;
}
