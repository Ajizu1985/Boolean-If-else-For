#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float n=10, arr[10];
    arr[0]=1;
    arr[1]=2;
    printf("arr[0]=%f\n", arr[0]);
    printf("arr[1]=%f\n", arr[1]);
    for(int i=2; i<n; i++){
    arr[i]= (arr[i-2] + 2 * arr[i-1])/3;
    printf("arr[%d]=%f\n", i, arr[i]);
    }
    return 0;
}