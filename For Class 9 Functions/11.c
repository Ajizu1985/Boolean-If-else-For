#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 void Minmax1(float,  float, float, float);
 void Minmax2(float, float);

int main () {
    float a=-10, b=0, c=-30, d=40, X=0, Y=-20; 
    
   Minmax1(a, b, c, d);
   Minmax2 (X, Y);
 
    return 0;
}

void Minmax1(float a, float b, float c, float d)
    { 
        float S = fmax(fmax(a, b), fmax(c, d));
        float T = fmin(fmin(a, b), fmin(c, d));
      if (S)
      {if (T)
          {printf("Higher: %0.1lf\n", S); 
           printf("Lesser: %0.1lf\n", T);
           }
      }
    }
    void Minmax2(float X, float Y)
    {
   float Z, W;
    if (X > Y|| Y > X)
    {
        W = fmax(X, Y);
        Z = fmin (X, Y);
        printf("Y=%0.1lf\n", W);
        printf("X=%0.1lf\n", Z);   
    }

    }
    