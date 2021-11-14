#include <stdio.h>
#include <math.h>
#include <stdlib.h>

   void MEAN1(float A, float B, float C, float D)
    { 
        float q, s, t;
        q = (A+B)/2;
        s = (A+C)/2;
        t = (A+D)/2;
            
            printf("mean1 of q = %0.1f\n", q);
            printf("mean1 of s = %0.1f\n", s);
            printf("mean1 of t = %0.1f\n", t);
            }
 
    void MEAN2(float A, float B, float C, float D)
    { 
        float q1, s1, t1;
        q1 = sqrt(A*B);
        s1 = sqrt(A*C);
        t1 = sqrt(A*D);
            
            printf("mean1 of q1 = %0.1f\n", q1);
            printf("mean1 of s1 = %0.1f\n", s1);
            printf("mean1 of t1 = %0.1f\n", t1);
            }
int main () {
    float A=2, B=3, C=4, D=5;
    
    MEAN1(A, B, C, D);
    MEAN2(A, B, C, D);
    return 0;
}