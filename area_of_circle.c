#include <stdio.h>
#include <math.h>
#define pi 3.14159
int main()
{
    int radius;
    float area;
    printf("Enter the radius of circle: ");
    scanf("%d", &radius);
   area = pi * pow(radius, 2);
    printf("The area of circle is %f", area);
    return 0;
}