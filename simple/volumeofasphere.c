#include<stdio.h>
int main(void)
{
    printf("In this program we are going to calculate the volume of a sphere where radius is given by the user.");
    float r;
    float PI=3.14;
    float volume;

    printf("\nEnter radius:");
    scanf("%f", &r);

    volume=(4*PI*r*r*r)/3;

    printf("\nVolume of sphere is:%f",volume);
    return 0;
}