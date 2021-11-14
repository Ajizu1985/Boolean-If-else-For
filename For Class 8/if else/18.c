#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main () {

    int a=4, b=2, c=4;
    if ((a==b) && !(a==c) && !(b==c)) 
    {printf("3");
    }
    else if ((a==c) && !(a==b) && !(b==c)) 
    {printf("2");
    }
    else if ((b==c) && !(a==b) && !(a==c)) 
    {printf("1");
    }
    
    return 0;
}