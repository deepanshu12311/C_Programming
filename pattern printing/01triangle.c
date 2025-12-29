#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number of rows:");
    scanf("%d", &n);

    int a;
    for (int j = 1; j <= n; j++)
    {
        if (j % 2 != 0)
            a = 1;
        else
            a = 0;
        for (int i = 1; i <= j; i++)
        {
            printf("%d", a);
            if (a == 0)
                a = 1;
            else
                a = 0;
        }
        printf("\n");
    }
    return 0;
}