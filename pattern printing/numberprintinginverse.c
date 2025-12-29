#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number of rows:");
    scanf("%d", &n);


    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n+1-j; i++)
            printf("%d ",i);
        printf("\n");
    }
    return 0;
}