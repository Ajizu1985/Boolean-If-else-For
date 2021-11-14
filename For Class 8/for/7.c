#include <stdio.h>
int main (){
    int a, b=10, sum=0;
   
    for(a = 1; a <= b; a++)
    {
    sum += a;
    }
    printf("%d\n", sum);
    return 0;
}