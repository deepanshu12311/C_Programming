#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number of rows:");
    scanf("%d", &n);

    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n-j; i++)
            printf(" ");
        for (char a=65;a<=64+j;a++)
            printf("%c",a);
        printf("\n");
    }
    return 0;
}