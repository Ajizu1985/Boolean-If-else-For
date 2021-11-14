#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 void AddLeftDigit(int, int);
 
int main () {
unsigned long R, K = 565675677;
    
   AddLeftDigit(K, R);
    return 0;
}

void AddLeftDigit(int K, int R)
    {
   int i, first_digit = 0.0, add;
        srand(time(0));
       for(i=1; i <= 9; i++){
       R = rand()%9+1;}
       printf("R = %d\n", R);
       while (K>=10)
       {first_digit = K/=10;
           K++;}
    printf("First digit = %d\n", first_digit);
       add = first_digit + R;
    printf("K = %d\n", add);
            }