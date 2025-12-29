#include<stdio.h>
int main(void)
{
    int l,b,area,perimeter;
    printf("Enter length of rectangle:\n");
    scanf("%d",&l);

    printf("Enter breadth of rectangle:\n");
    scanf("%d",&b);
    area=l*b;
    perimeter=2*(l+b);
    if (area>perimeter)
    {
        printf("area is greater than perimeter\n");
        printf("area=%d",area);
        printf("perimeter=%d",perimeter);
    }
    if (area<perimeter)
    {
        printf("perimeter is greater than area");
        printf("area=%d",area);
        printf("perimeter=%d",perimeter);
    }
    
    if (area==perimeter)
    {
        printf("both area and perimeter are equal");
        printf("area=%d",area);
        printf("perimeter=%d",perimeter);
    }
    
    
    return 0;
}