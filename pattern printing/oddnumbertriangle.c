#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number of rows:");
    scanf("%d", &n);


    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= 2*j-1; i=i+2)
            printf("%d ",i);
        printf("\n");
    }
    return 0;
}