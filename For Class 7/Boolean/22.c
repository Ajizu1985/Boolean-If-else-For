#include <stdio.h>
#include <stdbool.h>

int main () {

    int a = 1, b = 2, c = 2;
    bool result1, result2, result3, result4, result5, result6, result7;

    result1 = a < b;
    result2 = b < c;
    result3 = a > b;
    result4 = b > c;
    result5 = result1 && result2;
    result6 = result3 && result4;
    result7= result5 || result6;
    
    printf("%d\n", result7);

    return 0;

}