#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    int max= 0;
    for (int i = 1; i <=2*n-1; i++)
    {
        for (int j = 1; j <=2*n-1; j++)
        {
            int a=i;
            if(i>n){
                a = 2*n-i;
            }
            int b=j;
            if(j>n){
                b = 2*n-j;
            }
            if (a<b) max =b;
            else max=a;
            printf("%d", max);
        }
        printf("\n");
    }
    return 0;
}