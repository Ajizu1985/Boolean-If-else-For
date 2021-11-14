#include <stdio.h>
#include <math.h>

int main (){

    int a=4, result1, result2;
    result1 = a - 2;
    result2 = a + 1;
    if (a<0) {
        printf("%d", result2);
    }
    else 
    {
        printf("%d", result1);
    }
    return 0;
}
