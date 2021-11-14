#include <stdio.h>
#include <stdbool.h>

int main () {

    int a = 4, b = 6, c = 4;
    bool result1, result2, result3, result4;

    result1 = a==b;
    result2 = a==c;
    result3 = b==c;
    result4 = result1 || result2 || result3;
    printf("%d\n", result4);

    return 0;

}