#include <stdio.h>
int main (){
    int price=10500, kg, n=10;
    for (kg=1; kg<=n; kg++)
    {
        printf("%d kg = %d\n", kg, kg*price);
    }
    return 0;
}