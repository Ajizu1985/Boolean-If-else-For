#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 void Swap(int, int, int, int);
 
int main () {
    int A=10, B=20, C=30, D=40; 
    
   Swap(A, B, C, D);
 
    return 0;
}

void Swap(int A, int B, int C, int D)
    { 
       int temp1=A, temp2=B, temp3=C, temp4=D, temp5=A, temp6=B, temp7=C, temp8=D;
       if ((temp1 == temp5) && (temp2 == temp6) && (temp3 == temp7) && (temp4 == temp8))
       {
           temp1=temp6;
           temp2=temp5;
           temp3=temp8;
           temp4=temp7;
    printf("A=%d\nB=%d\nC=%d\nD=%d\n", temp1, temp2, temp3, temp4);  
    }
    }