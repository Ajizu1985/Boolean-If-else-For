#include <stdio.h>
#include <math.h>
#include <stdlib.h>

   void PowerA3_1 (int D, int E)
    { 
        int P1, P2;
        P1 = pow (D, 3);
        P2 = pow (E, 3);
        printf("D=%d\nE=%d\n", P1, P2);
        }
   
   void PowerA3_2 (float A, float B, float C)
    { 
        float W1, W2, W3;
        W1 = pow (A, 3);
        W2 = pow (B, 3);
        W3 = pow (C, 3);
        printf("A=%0.2f\nB=%0.2f\nC=%0.2f\n", W1, W2, W3);
    }

int main () {
    int D=4, E=5;
    double A=2.5, B=4.5, C=5.5;
    
    PowerA3_1(D, E);
    PowerA3_2(A, B, C);

    return 0;
}