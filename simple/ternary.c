#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    /*ternary operator*/
    /*expression 1? expression 2: expression 3*/
   
    n%2==0 ? printf("Even number") :  printf("Odd number");
   
   // This is the code when using if else
    /* if(n%2==0){
        printf("Even number");
    }
    else{
        printf("Odd number");
    } */

    return 0;

}