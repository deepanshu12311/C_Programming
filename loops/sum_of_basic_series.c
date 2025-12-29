// Print the sum of this series:
// 1+2+3+4.. upto 'n'.
#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a number upto which sum of series is to be calculated:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum of series is %d",sum);
    
    return 0;
}