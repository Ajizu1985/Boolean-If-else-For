#include <stdio.h>
#include <math.h> 
   int main (){
   int year=2000/4;
   
    if (!year) {
        printf("365\n");
        }
    if (year) {
        printf("366\n");
        }

    return 0;
}