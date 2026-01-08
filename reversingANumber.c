#include <stdio.h>
int rev(int n)
{
    int R = 0;
    while (n > 0)
    {
        int remainder = n % 10;
        R = R * 10 + remainder;
        n /= 10;
    }
    return R;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The reverse number is %d.", rev(n));
    return 0;
}