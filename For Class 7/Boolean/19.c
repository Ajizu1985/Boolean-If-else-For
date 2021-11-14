#include <stdio.h>
#include <stdbool.h>

int main () {

    int a = 1, b = 3, c = -2;
    bool result1, result2, result3, result4, result5, result6, result7;

    result1 = a > 0;
    result2 = b > 0;
    result3 = c < 0;
    result4 = a < 0;
    result5 = b < 0;
    result6 = c > 0;
    result7 = result1 && result2 && result3 || result4 && result2 && result6|| result1 && result5 && result6;
    
    printf("%d\n", result7);

    return 0;

}
