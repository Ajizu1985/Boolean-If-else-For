#include <stdio.h>
#include <math.h> 
   int main (){
    double num1=5.0, num2=2.0, num3=4.0;
    
    if (num1<num2 && num2<num3) {
        printf("%lf\n", num1*2);
        printf("%lf\n", num2*2);
        printf("%lf\n", num3*2);}
    if (num1>num2 && num2>num3) {
        printf("%lf\n", num1*2);
        printf("%lf\n", num2*2);
        printf("%lf\n", num3*2);}
    else {
        printf("%lf\n", -num1);
        printf("%lf\n", -num2);
        printf("%lf\n", -num3);}
    
    
    return 0;
}