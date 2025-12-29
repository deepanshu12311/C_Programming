//take positive integer input and tell if it is divisible by 5 and 3
#include<stdio.h>
int main(void)
{
    int n;

    printf("Enter a positive integer:\n");
    scanf("%d",&n);

    if (n%3==0 || n%5==0)
    {
        printf("Number is divisible by 3 or 5");
    }
    else
    {
        printf("Number is not divisible by 3 or 5");
    }

    return 0;
}