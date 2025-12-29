//WAP to count digits of a given number
#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a number of which digitd is to be count:");
    scanf("%d",&n);
    int count=0;
    while (n!=0)
    {
       n=n/10;
        count++;
    }
    printf("The number of dogits are %d", count);
    return 0;
}
