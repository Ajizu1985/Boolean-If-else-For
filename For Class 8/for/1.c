#include <stdio.h>
int main ()
{
    int n, k;
    printf("N: ");
    scanf("%d", &n);
    for (k=1; k<=n; k++)
    {
        printf("%dk\n", k);
    }


    return 0;
}