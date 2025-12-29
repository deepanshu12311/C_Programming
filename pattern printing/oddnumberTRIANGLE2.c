#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number of rows:");
    scanf("%d", &n);

    for (int j = 1; j <= n; j++)
    {
        int a=1;
        for (int i = 1; i <= j; i++)
        {
            printf("%d ", a);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}