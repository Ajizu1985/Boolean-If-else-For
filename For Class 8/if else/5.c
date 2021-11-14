#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main () {

    int a=-1, b=0, c=0, x, y, z, q, r, s;
    if (a > 0 || b > 0 || c >0)
    {if (a>0)
    {
       x=1;}

    if (b>0)
    {
       y=1;}
    if (c>0)
    {
        z=1;}
    if (x == 1 || y == 1 || z == 1)   
    {printf("Positive:%d\n", x + y + z);}
    }

    if (a < 0 || b < 0 || c < 0)
    {if (a<0)
    {
       q=1;}

    if (b<0)
    {
       r=1;}
    if (c<0)
    {
        s=1;}
    if (q == 1 || r == 1 || s == 1)   
    {printf("Negative:%d\n", q + r + s);}
    }
    
    return 0;
}