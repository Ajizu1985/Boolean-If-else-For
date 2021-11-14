#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main () {

    int a=1, b=4, c=4, d=4;
    if ((a==b) && (a==c) && (b==c) && !(a==d) && !(b==d) && !(c==d)) 
    {printf("4");
    }
    else if ((a==b) && (a==d) && (b==d) && !(a==c) && !(b==c) && !(c==d)) 
    {printf("3");
    }
    else if ((a==c) && (a==d) && (d==c) && !(a==b) && !(b==d) && !(c==b)) 
    {printf("2");
    }
    else if ((b==c) && (b==d) && (d==c) && !(a==b) && !(a==d) && !(c==a)) 
    {printf("1");
    }
    return 0;
}