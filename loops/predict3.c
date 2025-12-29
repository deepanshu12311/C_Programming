//THIS IS IMPORTANT TO UNDERSTAND
#include<stdio.h>
int main(void)
{
    int x=4,y,z;
    y=--x; //pre-decrement
    z=x--; //post-decrement 
    printf("\n%d %d %d",x,y,z);
    return 0;
}
