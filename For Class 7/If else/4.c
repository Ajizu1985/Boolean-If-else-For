#include <stdio.h>
#include <math.h>

int main (){

    int a=4, b=5, c=6, x, y, z;
    
     if (a > 0 || b > 0|| c > 0) {
        if (a > 0) {
            x = 1;}
        if (b > 0) {
            y = 1;}
        if (c > 0) {
            z = 1;}
        printf("%d\n", x + y + z);
     }
    return 0;
}
