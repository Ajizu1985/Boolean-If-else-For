#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main () {

    int x = -2, y = 3;
    bool result1;

    result1 = x > 0 && y < 0;
    
    printf("%d\n", result1);

    return 0;

}