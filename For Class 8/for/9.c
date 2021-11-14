#include <stdio.h>
#include <math.h>
int main (){
    int a, b=5, sum=0;
   
    for(a = 1; a <= b; a++)
    {
    sum += pow (a, 2);
    }
    printf("%d\n", sum);
    return 0;
}