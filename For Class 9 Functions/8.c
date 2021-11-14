#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 int AddRightDigit(int, int);
 
int main () {
    int K=100156556, R, add; 
    
   add = AddRightDigit(K, R);
 printf("Result = %d\n", add);
   
    return 0;
}

int AddRightDigit(int K, int R)
    { 
       int i, random, last_digit, add;
     srand(time(0));
       for(i=1; i <= 9; i++){
       R = rand()%9+1;}
       printf("R = %d\n", R);
       last_digit = K%10;
       printf("Last_digit = %d\n", last_digit);
       add = last_digit + R;
        return add;
            }
