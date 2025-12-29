#include<stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
        fact = fact * i;
    return fact;
}
int main(){
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    int r;
    for(int i=0; i<=n;i++)
    {
        for(int k=0;k<=n-i;k++){
            printf (" ");
        }
         for(int j=0;j<=i;j++)
         {
        
            int ncr, ifact, jfact, ijfact;
            ifact = factorial(i);
            jfact = factorial(j);
            ijfact = factorial(i-j);
            ncr= ifact/(jfact*ijfact);
            printf("%d ",ncr);
         }
         printf("\n");
    }


    return 0;
}