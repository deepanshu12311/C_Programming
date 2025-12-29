// take positive integer input and tell if it is a three digit number or not.
#include<stdio.h>
int main(void)  
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
     if(n>99 && n<1000)
     {
        printf("Number is a three digit number");
     }
     else{
        printf("Number is not a three digit number");
     }

    return 0;
}