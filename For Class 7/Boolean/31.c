#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main () {

    int a=5, b=5, c=5;
    bool result1, result2, result3, result4, result5, result6, result7;

    result1 = a == b;
    result2 = b > c;
    result3 = a == c;
    result4 = c > b;
    result5 = b == c;
    result6 = c > a;
    result7 = result1 && result2 || result3 && result4 || result5 && result6;
    printf("%d\n", result7);
    return 0;

}