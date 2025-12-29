#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    int i, j, k, l, m, o, a=1;

        for(o=1; o<=2*n-1; o++)
        printf("%d",o);
        printf("\n");
    for (i= 1; i <= n; i++)
    {
        int a=1;
        for(j=1;j<=n-i; j++)
        {printf("%d",a);
        a++;}
        for(k=1; k<=i; k++)
        {printf(" ");
            a++;}

           for(l=1;l<=i-1;l++)
        {printf(" ");
        a++;} 
        for(m=1; m<=n-i; m++)
        {
            printf("%d",a );
            a++;
        }

        printf("\n");
    }

    return 0; 
}
