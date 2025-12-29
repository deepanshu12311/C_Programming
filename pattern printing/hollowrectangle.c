#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number of rows:");
    scanf("%d", &n);

    int m;
    printf("Enter number of columns:");
    scanf("%d",&m);

    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= m; i++)
        {
           if(i==1 || j==1 || i==m || j==n) printf("*");
           else printf(" ");
        }
        printf("\n");
    }
    return 0;
}