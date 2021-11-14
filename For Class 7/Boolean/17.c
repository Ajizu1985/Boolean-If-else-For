#include <stdio.h>
#include <stdbool.h>

int main () {

    int a = 12;
    bool result1, result2, result3;

    result1 = a%2==1;
    result2 = a >= 100 && a < 1000;
    result3 = result1 && result2;
    
    printf("%d\n", result3);

    return 0;

}
