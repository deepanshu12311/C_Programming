#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int product=1;
    if (n == 0)
    {
        printf("factorial of 0 is 1");
        return 0;
    }
    
        for (int i = 1; i<=n; i++)
        {
            product = product* i;
            printf(" %d!=%d\n",i,product);
        }
    return 0;
}