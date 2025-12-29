#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    int i, j, k, nst = 1;
    {
        for (j = 1; j <= n; j++)
        {
            for (i = 1; i <= n - j; i++)
            {
                printf("  ");
            }
            for (k = 1; k <= nst; k++)
            {
                printf("%d ",k);
            }
            nst = nst + 2;
            printf("\n");
        }
    }
    return 0;
}
