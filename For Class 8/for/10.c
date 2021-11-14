#include <stdio.h>
#include <math.h>
int main (){
    double a, b=3, sum=0, N=2;
   
    for(a = 0; a <= b; a++)
    {
    sum += pow(N+a, 2);
    }
    printf("%lf\n", sum);
    return 0;
}