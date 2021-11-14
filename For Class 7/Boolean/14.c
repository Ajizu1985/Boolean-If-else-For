#include <stdio.h>
#include <stdbool.h>

int main () {

    int a = 4, b = -9, c = 11;
    bool result1, result2, result3, result4;

    result1 = a < 0;
    result2 = b > 0;
    result3 = c < 0;
    result4 = result1 || result2 || result3;
    printf("%d\n", result4);
    
    return 0;

}