#include<stdio.h>
int main(){
    int a[5] = {2,4,6,8,1}; // 5 dabbe create to kar liye
   for(int i=0;i<=4;i++)
    printf("%d\n",a[i]);
    for(int j=0;j<5;j++)
    printf("%p\n",&a[j]);

    return 0;
}

// Arrays are continuous memory allocation
// arr[0] is the address of whole array
// int data type memory is 4 bytes
//there is difference of 4 bytes in address of arrys elements
// Array pass by reference