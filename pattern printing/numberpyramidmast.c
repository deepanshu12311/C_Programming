#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    int i, j, k, l, m;

    for (j = 1; j <= n; j++)
    {
        m = j - 1;
        for (i = 1; i <= n - j; i++)
        {
            printf("  ");
        }
        for (k = 1; k <= j; k++)
        {
            printf("%d ", k);
        }
        for (l = 1; l <= j-1 ; l++)
        {
            printf("%d ", m);
            m = m - 1;
        }

        printf("\n");
    }

    return 0;
}
