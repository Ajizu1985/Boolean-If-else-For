#include <stdio.h>
#include <math.h> 
   int main (){
   int num1=-2, num2=4;
   
    if (num1 > 0 && num2 > 0) {
        printf("1Q\n");
        }
        
    if (num1 < 0 && num2 > 0) {
        printf("2Q\n");
      }
    
    if (num1 < 0 && num2 < 0) {
        printf("3Q\n");
      }
    if (num1 > 0 && num2 < 0) {
       printf("4Q\n");
       }

    return 0;
}