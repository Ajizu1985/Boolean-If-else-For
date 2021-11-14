#include <stdio.h>
#include <stdbool.h>

int main () {

    int a = 1, b = 2, c = 0, d = 1;
    bool result1, result2, result3;

    result1 = a = d;
    result2 = b = c;
    result3= result1 && result2;
    
    printf("%d\n", result2);

    return 0;

}
