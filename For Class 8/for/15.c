#include <stdio.h>
#include <math.h>
int main (){
   double i, n=4, sum=1, A=3;
   
    for(i = 1; i <= n; i++)
    {
    sum *= A;
    
    }
    printf("Total:%f\n", sum);
    return 0;
}