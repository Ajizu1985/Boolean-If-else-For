#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float n=10, arr[10];
    arr[0]=1;
    arr[1]=1;
    printf("arr[0]=%d", arr[0]);
    printf("arr[1]=%d", arr[1]);
    for(int i=2; i<n; i++){
    arr[i]= arr[i-1] + arr[i-2];
    printf("arr[%d]=%f\n", i, arr[i]);
    }
    return 0;
}