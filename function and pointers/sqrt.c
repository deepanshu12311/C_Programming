//There are square root, power, and minimum code 
#include<stdio.h>
#include <math.h>
int min(int a, int b){
    int c=a;
    if(b<a) c=b;
    return c; 
    }
int main()
{
    float a;
    printf("Enter a number:\n");
    scanf("%f",&a);
    int b,c;
    printf("Enter base number:");
    scanf("%d",&b);
    printf("Enter power number:");
    scanf("%d",&c);
    int p = pow(b,c);
    float root = sqrt(a);
    int d, e;
    printf("Enter 1st number:");
    scanf("%d",&d);
    printf("Enter 2nd number:");
    scanf("%d",&e);
    int m = min(d,e);
    printf("The square root of %f is %f.\n", a, root);
    printf("Power of the following number is: %d \n", p);
    printf("Minimum of %d and %d is %d\n",d,e,m);
    return 0;
}