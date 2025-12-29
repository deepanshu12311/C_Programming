#include <stdio.h>
void increasing(int x, int n)
{
    if (x>n)
        return;
    printf("%d\n", x);
    increasing(x+1, n);
    return;
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    increasing(1,x);
    return 0;
}
  