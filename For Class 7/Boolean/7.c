#include <stdio.h>
#include <stdbool.h>

int main () {

    int a = 1, b = 2, c = 3;
    bool result1;

    result1 = (c > b) && (b > a);

    printf("%d\n", result1);

    return 0;

}