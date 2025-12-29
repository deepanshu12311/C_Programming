//this is a code without using function form.

/*
#include<stdio.h>

int main(){
int a;
printf("Enter a: ");
scanf("%d", &a);

int b;
printf("Enter b: ");
scanf("%d", &b);
int temp=0;
temp=a;
a=b;
b=temp;
printf("a: %d",a);
printf("b: %d",b);
    return 0;
}
    */
// Swaping without using the third variable
#include<stdio.h>

int main(){
int a;
printf("Enter a: ");
scanf("%d", &a);

int b;
printf("Enter b: ");
scanf("%d", &b);
a=a+b;
b=a-b;
a=a-b;
printf("a: %d",a);
printf("b: %d",b);
    return 0;
}