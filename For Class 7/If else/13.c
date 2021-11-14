#include <stdio.h>
#include <math.h>

int main (){

    int num1=4, num2=2, num3=6;
        if(num1>num2 && num2>num3) {
        printf("%d\n", num2);
        }
        if (num1>num3 && num3>num2) {
        printf("%d\n", num3);
        }
        if (num2>num3 && num3>num1) {
        printf("%d\n", num3);
        }
        if (num2>num1 && num1>num3) {
        printf("%d\n", num1);
        }
        if (num3>num2 && num2>num1) {
        printf("%d\n", num2);
        }
        if (num3>num1 && num1>num2) {
        printf("%d\n", num1);
        }
            
    return 0;
}
