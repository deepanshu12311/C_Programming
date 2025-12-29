#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    int i, j, k, l, m, o;

        for(o=1; o<=2*n-1; o++)
        printf("*");
        printf("\n");
    for (i= 1; i <= n; i++)
    {
        for(j=1;j<=n-i; j++)
        printf("*");
        for(k=1; k<=i; k++)
        printf(" ");
        for(l=1;l<=i-1;l++)
        printf(" ");
        for(m=1; m<=n-i; m++)
        printf("*");

        printf("\n");
    }

    return 0; 
}

