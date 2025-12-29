#include<stdio.h>
int factorial(int n){
if(n==1 || n==0){
    return 1;
}
return n*factorial(n-1);
}
int main(){
int n;
printf("Enter a number:");
scanf("%d",&n);
int x = factorial(n);
printf("Factorial of %d is %d.",n , x);
    return 0;
}