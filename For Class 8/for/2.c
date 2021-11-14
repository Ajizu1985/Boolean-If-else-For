#include <stdio.h>
int main ()
{
    int a, b=10, counter=0;
    for (a=1; a<=b; a++)
    {
        printf("%d\n", a);
        counter++;  
    }
    printf("%d\n", counter); 
    return 0;
}