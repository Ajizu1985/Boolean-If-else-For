#include <stdio.h>
int main (){
    int price=10000.0;
    double n=2.0, i;
    for(i = 1.2; i <= n; i += 0.2)
    {
    printf("%lf kg = %lf\n", i, i*price);
    }
    return 0;
}