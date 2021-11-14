#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main () {
    int x = 3, y = 2;
    bool num1, num2, num3, num4;
    num1 = !(x%2==1 && y%2==1);
    num2 = !(x%2==0 && y%2==0);
    num3 = x%2==1 && y%2==0||x%2==0 && y%2==1;
    num4 = num1&&num2&&num3;
    printf("%d = White\n", num4);
    return 0;
}