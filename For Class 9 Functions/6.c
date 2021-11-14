#include <stdio.h>
#include <math.h>
#include <stdlib.h>

 int DigitCountSum1(int, int, int);
void DigitCountSum(int, int, int);
 
int main () {
    int a=5, b=16, c=551, result1;
    
   result1 = DigitCountSum1(a, b, c);
   DigitCountSum(a, b, c);
    printf("Total = %d\n", result1);
      return 0;
}

int DigitCountSum1(int a, int b, int c)
    {
       int i, counter=0, n=3;
        for(i=1; i <= n; i++){
       counter++;
       }
        return counter;
            }

    void DigitCountSum(int a, int b, int c)
    {
    int result2;
    result2= a + b + c;
printf("Sum=%d\n", result2);
            }