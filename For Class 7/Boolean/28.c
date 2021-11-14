#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main () {

    int x = -4, y = 3;
    bool result1, result2, result3;

    result1 = (x >0 && y > 0);
    result2 = (x < 0 && y < 0);
    result3 = result1 || result2;
    printf("%d\n", result3);
    return 0;

}
