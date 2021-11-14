#include <stdio.h>
#include <math.h>
int main (){
   double a, b=5, sum=0;
   
    for(a = 1; a <= b; a+=2)
    {
     printf("%f\n", pow(a, 2));

    sum += pow(a, 2);
    
    }
    printf("Total:%f\n", sum);
    return 0;
}