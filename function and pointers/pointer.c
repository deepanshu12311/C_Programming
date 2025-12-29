#include<stdio.h>
int main(){
    int a = 10;
    int *ptra = &a;
    printf("%d\n", a); // prints a
    printf("%p\n", &a); // prints address of a
    printf("%d\n", *ptra); // prints a
    printf("%p\n", ptra); // prints address of a
    printf("%p\n", &ptra); // prints address of itself
   ptra++;

    printf("%p\n", ptra);
   
    
    
}
    
