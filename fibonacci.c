#include <stdio.h>
int main()
{
    int n;
    printf("Terms needed: ");
    scanf("%d", &n);
    int a, b, sum;
    a = 1;
    b = 1;
    sum = 0;
    if (n < 1)
    {
        printf("Enter a positive number");
        return 1;
    }
    if (n >= 1)
    {
        printf("%d ", a);
    }
    if (n >= 2)
    {
        printf("%d ", b);
    }

    for (int i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("%d ", sum);
    }

    return 0;
}