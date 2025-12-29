#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter odd number of rows:");
    scanf("%d", &n);

    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
           if(i==j || i+j==n+1 ) printf("*");
           else printf(" ");
        }
        printf("\n");
    }
    return 0;
}