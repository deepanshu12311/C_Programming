#include<stdio.h>
int main(void)
{
    int x;
    printf("Enter a number:");

    scanf("%d",&x);
    if (x%5==0)
    {
        printf("divisible by 5");
    }
    else{
        printf("not divisivble by 5");
    }
    return 0;
}