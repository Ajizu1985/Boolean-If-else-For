#include <stdio.h>
#include <math.h> 
   int main (){
   int x=3;
   
    if (x>1 && x<10 && x%2==0) {
        printf("1 xonali juft son\n");
        }
     if (x>1 && x<10 && x%2==1) {
        printf("1 xonali toq son\n");
        }
    if (x>=10 && x<100 && x%2==0) {
        printf("2 xonali juft son\n");
        }
    if (x>=10 && x<100 && x%2==1) {
        printf("2 xonali toq son\n");
        }
     if (x>=100 && x<1000 && x%2==0) {
        printf("3 xonali juft son\n");
        }
    if (x>=100 && x<1000 && x%2==1) {
        printf("3 xonali toq son\n");
        }
    return 0;
}