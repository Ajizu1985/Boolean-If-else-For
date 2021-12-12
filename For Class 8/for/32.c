#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float n=10, arr[10];
    arr[0]=1;
    for(int i=1; i<=n; i++){
    arr[i]= (arr[i-1]+1)/i;
    printf("arr[%d]=%f\n", i, arr[i]);
    }
    return 0;
}