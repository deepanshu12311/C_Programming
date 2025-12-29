// WAP to print reverse of a given number and their sum.
#include <stdio.h>
int main(void)
{
    int n;
    int original;
    
    printf("Enter a number:");
    scanf("%d", &n);
    original=n;
    int r = 0;
    while (n > 0)
    {
        r = r * 10;
        r = r + (n % 10);
        n = n / 10;
    }
    printf("The reversed number is %d", r);
    {
        int sum;
        sum = original + r;
        printf("\nSum of reversed and original number is %d", sum);
    }
    return 0;
}