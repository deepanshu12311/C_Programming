// take 3 positive integers input and print the greatest of them.
#include <stdio.h>
int main(void)
{
    int a, b, c;

    printf("Enter 1st number:\n");
    scanf("%d", &a);

    printf("Enter 2nd number:\n");
    scanf("%d", &b);

    printf("Enter 3rd number:\n");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("1st number is greatest which is %d", a);
    }
    if (b > a && b > c)
    {
        printf("2nd number is greatest which is %d", b);
    }
    if (c > b && c > a)
    {
        printf("3rd number is greatest which is %d", c);
    }
    return 0;
}