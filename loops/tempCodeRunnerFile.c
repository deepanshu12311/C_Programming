#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    for(int i=2; i<=n-1; i++){
        if(n%i==0)
        {
            printf("the given number is composite");
            break;
    }
    else{
        printf("The given number is prime");
        break;
    }
}
        return 0;
} 