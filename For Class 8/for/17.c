#include <stdio.h>
#include <math.h>
int main (){
   double i, n=2, sum=0, A=2;
   
    for(i = 0; i <= n; i++)
    {
    printf("%f\n", pow (A, i));
   sum += pow(A, i);
    
    }
     printf("%f\n", sum);
    return 0;
}
