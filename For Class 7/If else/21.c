#include <stdio.h>
#include <math.h> 
   int main (){
   int num1=5, num2=4;
   
    if (num1 == 0 && num2 == 0) {
        printf("0\n");
        }
        
   else if (num1 > 0 && num2 == 0) {
        printf("1\n");
      }
    
   else if (num1 == 0 && num2 > 0) {
        printf("2\n");
      }
    else {
       printf("3\n");
       }

    return 0;
}