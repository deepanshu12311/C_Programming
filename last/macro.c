#include<stdio.h>
#define PI 3.14159265359
#define Area(r) (PI*r*r)
int main(){
    printf("%.11f\n",PI);
    int r;
    printf("Enter the radius:");
    scanf("%d",&r);

    printf("The area of the circle is %f",Area(r));
}