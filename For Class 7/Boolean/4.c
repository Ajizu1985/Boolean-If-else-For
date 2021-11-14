#include <stdio.h>
#include <stdbool.h>

int main () {

    int a=1, b = 2;
    bool result1, result2;

    result1 = a > 2;
    result2 = b <= 3;
    
    printf("%d\n", result1);
    printf("%d\n", result2);

    return 0;

}