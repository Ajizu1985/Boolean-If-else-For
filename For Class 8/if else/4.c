#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main () {

    int a=-1, b=-2, c=2, x, y, z;

    if (a>0)
    {
       x=1;}

    if (b>0)
    {
       y=1;}
    if (c>0)
    {
        z=1;}

    if (x == 1 || y == 1 || z == 1)   
    {printf("%d", x + y + z);}
 
    return 0;
}