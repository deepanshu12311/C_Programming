//This is important

//this will not work
//Here for this code we will use pointers
//Pointers are those which stores the address of variable
/*
#include<stdio.h>
void swap(int a, int b){
int temp=0;
temp=a;
a=b;
b=temp;
return;
}
int main(){
int a;
printf("Enter a: ");
scanf("%d", &a);

int b;
printf("Enter b: ");
scanf("%d", &b);

swap(a,b);

printf("a: %d \n",a);
printf("b: %d",b);
    return 0;
}
    */
 /*  #include<stdio.h>
   int main(){
    int a=5;
    int* p=&a; //This is the method to write pointer
    printf("%p\n",p); // %p se address print hota hai
    printf("%p\n",&p);  // pointer has its own address
    printf("%d",*p);
    return 0;
   }
*/
#include<stdio.h>
void swap(int*  x, int* y){
int temp=0;
temp=*x;
*x=*y;
*y=temp;
return;
}
int main(){
int a;
printf("Enter a: ");
scanf("%d", &a);

int b;
printf("Enter b: ");
scanf("%d", &b);

swap(&a,&b);

printf("a: %d \n",a);
printf("b: %d",b);
    return 0;
}