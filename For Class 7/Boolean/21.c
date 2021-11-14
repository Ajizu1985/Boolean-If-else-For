#include <stdio.h>
#include <stdbool.h>

int main () {

    int a = 2, b = 4, c = 3;
    bool result1, result2, result3;

    result1 = a < b;
    result2 = b < c;
    result3 = result1 && result2;
    
    printf("%d\n", result3);

    return 0;

}