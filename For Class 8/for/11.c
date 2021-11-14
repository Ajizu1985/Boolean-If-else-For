#include <stdio.h>
#include <math.h>
int main (){
    double a, b=2.0, sum=1, W=2;
   
    for(a = 1.1; a <= b; a+=0.1)
    {
    sum *= a;
    }
    printf("%lf\n", sum);
    return 0;
}