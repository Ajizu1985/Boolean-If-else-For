#include <stdio.h>
#include <math.h>
#include <stdlib.h>

   void Triangle1(int a, int b, int c)
    { 
       int Area, Perimeter;
        Area = (sqrt(3)/2) * pow (a, 2);
        Perimeter = (a+b+c);
       
            printf("Area = %d\n", Area);
            printf("Perimeter = %d\n", Perimeter);
           
            }
 
int main () {
    int a=5, b=5, c=5;
    
   Triangle1(a, b, c);

    return 0;
}