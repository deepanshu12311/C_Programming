//Make a function which calculates 'a' raise to power 'b' using recursion.
#include <stdio.h>
int power(int n, int s)
{
if (s==0) return 1;
else {
    return n*power(n,s-1);
}
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int b;
    printf("Enter power ");
    scanf("%d",&b);
    int result;
    result = power(a,b);
    printf("Result %d", result);
    return 0;
}
