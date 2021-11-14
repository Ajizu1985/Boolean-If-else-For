#include <stdio.h>
#include <stdbool.h>

int main () {

    int a = 0, b = 0;
    bool result1, result2;

    result1 = a >= 0;
    result2 = b < -2;
    
    printf("%d\n", result1);
    printf("%d\n", result2);

    return 0;

}