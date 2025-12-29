#include<stdio.h>
int main(void)
{
    int j;
    while (j<=10){
        printf("\n%d", j);
        j=j+1;
    }
    return 0;
}

//This code will not run as there is no initialization in line 4.
//There should be written 'int j=1;' or something else