#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main () {

    int a=5, b=5, c=5;
    bool result1, result2, result3, result4;

    result1 = a - b == 0;
    result2 = a - c == 0;
    result3 = b - c == 0;
    result4 = result1 && result2 && result3;

    printf("%d\n", result4);
    return 0;

}