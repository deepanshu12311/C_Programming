// WAP to check if a number is prime or not
#include <stdio.h>
int main(void)
{
    int n;
    int a = 0;

    printf("Enter a number:");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("The given number is neither prime nor composite.");
        return 0;
    }

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (a == 0)
    {
        printf("The given number is prime.");
    }
    else
        printf("The given number is composite.");
    return 0;
}