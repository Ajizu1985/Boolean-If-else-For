#include <stdio.h>
#include <math.h>

int main (){

    int a=-2, result1, result2, result3;
    result1 = 10;
    result2 = a-2;
    result3 = a;
    if (a<0) {
        printf("%d", result2);
    }
    if (a==0) {
        printf("%d", result1);
    }
    if (a>0)
    {
        printf("%d", result3);
    }
    return 0;
}
