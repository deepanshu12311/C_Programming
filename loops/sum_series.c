// Print the sum of this series:
// 1-2+3-4+5-6.. upto 'n'.
#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a number upto which sum of series is to be calculated:");
    scanf("%d",&n);
// odd are adding and even are substracting
int sum=0;
for(int i=1;i<=n;i++)
{
    if(i%2!=0) sum=sum+i;
    else sum=sum-i;
}
printf("%d",sum);

    return 0;
}