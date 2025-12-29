// Print first 'n' fibonacci numbers.
#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int a = 1, b = 1, sum = 1;
    if (n >= 1) {
        printf("%d ", a);
    }
    if (n >= 2) {
        printf("%d ", b);}

    for (int i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("%d ", sum);
    }
    return 0;
}