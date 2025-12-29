
#include <stdio.h>
void sum(int n, int s)
{
    if (n == 0)
    {
        printf("%d", s);
         return;
    }
    sum(n - 1, s + n);
    return;
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    sum(x, 0);
    return 0;
}
