#include<stdio.h>
int main(){
int x = 5;
int a= x++;
int b= x;
int c= ++x;
printf("%d %d %d", a, b, c);
return 0;
}