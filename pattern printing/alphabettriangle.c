#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number of rows:");
    scanf("%d", &n);


    for (int j = 1; j <= n; j++)
    {
        for (char i=65; i <= 64+j; i++)
            printf("%c ",i);
        printf("\n");
    }
    return 0;
}