#include <stdio.h>
#include <stdbool.h>

int main () {

    int a = 101;
    bool result1, result2, result3;

    result1 = a%2==0;
    result2 = a >= 10 && a < 100;
    result3 = result1 && result2;
    
    printf("%d\n", result3);

    return 0;

}
