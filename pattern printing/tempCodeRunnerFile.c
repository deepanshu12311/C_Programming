#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number of rows:");
    scanf("%d", &n);
int a=1;
    for (int j = 1; j <= n; j++)
    {
     for (int i = 1; i <= j; i++)
        
         {printf("%d ",a);
        a++; 
        }
        printf("\n");
    }
    return 0;
}