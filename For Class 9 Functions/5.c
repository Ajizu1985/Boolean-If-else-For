#include <stdio.h>
#include <math.h>
#include <stdlib.h>

   void RectPS(int a, int b)
    { 
       int Area, Perimeter;
        Area = a * b;
        Perimeter = 2 * (a + b);
       
            printf("Area = %d\n", Area);
            printf("Perimeter = %d\n", Perimeter);
           
            }
 
int main () {
    int x1 = 1, x2 = 11, y1 = 1, y2 = 6, a, b; 
    a = y2 - y1, b = x2 - x1;
    
   RectPS(a, b);

    return 0;
}