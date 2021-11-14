#include <stdio.h>
#include <math.h> 
   int main (){
   int num1=9, num2=3, num3=5, num4=2;
    
    if (num1%2==0 && num2%2==1 && num3%2==1 && num4%2==1) {
        printf("1\n");}
        
    if (num1%2==1 && num2%2==0 && num3%2==1 && num4%2==1) {
        printf("2\n");}

    if (num1%2==1 && num2%2==1 && num3%2==0 && num4%2==1) {
        printf("3\n");}
    if (num1%2==1 && num2%2==1 && num3%2==1 && num4%2==0)
    {
        printf("4\n");}
    return 0;
}