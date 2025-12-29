#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("The number is divisible by 2..");
    }
    else
        printf("The number is not divisible by 2..");
    return 0;
}