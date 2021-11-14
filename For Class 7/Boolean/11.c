#include <stdio.h>
#include <stdbool.h>

int main () {

    int a = 2, b = 3;
    bool result1, result2, result3, result4, result5;

    result1 = (a%2) == 1;
    result2 = (b%2) == 1;
    result3 = (a%2) == 0;
    result4 = (b%2) == 0;
    result5 = (result1 && result2) || (result3 && result4);
    printf("%d\n", result5);
    
    return 0;

}