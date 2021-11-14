#include <stdio.h>
#include <math.h>

int main (){

    double num1=4.0, num2=2.0, num3=5.0;
    if(num1<num2 && num2<num3) {
        printf("%lf\n", num1*2);
        printf("%lf\n", num2*2);
        printf("%lf\n", num3*2);}
        else if (!(num1>num2 && num2>num3)) {
        printf("%lf\n", pow(num1, -1));
        printf("%lf\n", pow(num2, -1));
        printf("%lf\n", pow(num3, -1));
        }
    
    return 0;
}
