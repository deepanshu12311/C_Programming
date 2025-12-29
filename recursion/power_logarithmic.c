//Make a function which calculates 'a' raise to power 'b' using recursion.
#include <stdio.h>
int powerlog(int n, int s)
{
if (s==1) return n;
if (s==0) return 1;
if(s%2==0) {
    return powerlog(n,s/2)*powerlog(n,s/2);
}
else {
    return powerlog(n,s/2)*powerlog(n,s/2)*n;
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
    result = powerlog(a,b);
    printf("Result %d", result);
    return 0;
}
