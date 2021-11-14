#include <stdio.h>
#include <math.h> 
   int main (){
   int num1=4, num2=-2, num3=1;
    
    if (num1<0 && num2>0 && num3>0) {
        printf("1\n");}
        
    if (num1>0 && num2<0 && num3>0) {
        printf("2\n");}

    if (num1>0 && num2>0 && num3<0) {
        printf("3\n");}
    
    
    return 0;
}