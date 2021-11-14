#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main () {

    int a=3, b=4, c=2, x, y, z;
    bool w;

    x = pow (c, 2);
    y = pow (b, 2);
    z = pow (a, 2);
    w = (x == y + z);
    printf("%d\n", w);
    return 0;

}