 #include <stdio.h>
#include <math.h> 
   int main (){
   int num1=50, num2=20, num3=40;
    // A = num1, B = num2, C=num3;
    if (num1>num2 && num2>num3) {
        printf("%d\n", num2);
        printf("%d\n", num1-num2);
        }
        
    if (num1>num3 && num3>num2) {
        printf("%d\n", num3);
       printf("%d\n", num1-num3);}
    
    if (num2>num3 && num3>num1) {
        printf("%d\n", num3);
       printf("%d\n", num2-num3);}

    if (num2>num1 && num1>num3) {
       printf("%d\n", num1);
       printf("%d\n", num2-num1);}

    if (num3>num2 && num2>num1) {
        printf("%d\n", num2);
       printf("%d\n", num3-num2);}

    if (num3>num1 && num1>num2) {
        printf("%d\n", num1);
       printf("%d\n", num3-num1);}

    return 0;
}