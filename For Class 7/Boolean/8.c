#include <stdio.h>
#include <stdbool.h>

int main () {

    int a = 2, b = 5;
    bool result1, result2;

    result1 = !(a%2==1);
    result2 = b%2==0;

    printf("%d\n", result1);
    printf("%d\n", result2);
    return 0;

}