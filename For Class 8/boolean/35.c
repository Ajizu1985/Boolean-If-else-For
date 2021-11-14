#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main () {
    int x1 = 3, x2=5, y1 = 3, y2=6;
    bool num1, num2, num3, num4, num5, num6, num7, num8;
    num1 = !(x1%2==1 && y1%2==1);
    num2 = !(x1%2==0 && y1%2==0);
    num3 = x1%2==1 && y1%2==0||x1%2==0 && y1%2==1;
    num4 = num1&&num2&&num3;
    num5 = !(x2%2==1 && y2%2==1);
    num6 = !(x2%2==0 && y2%2==0);
    num7 = x2%2==1 && y2%2==0||x2%2==0 && y2%2==1;
    num8 = num5&&num6&&num7;
    printf("%d = White\n", num4&&num8);

    return 0;
}