#include <stdio.h>
int main (){
    int a, b=5, sum=1;
   
    for(a = 1; a <= b; a++)
    {
    sum *= a;
    }
    printf("%d\n", sum);
    return 0;
}