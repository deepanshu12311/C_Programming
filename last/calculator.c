//Write a program to create a calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case and functions. The calculator should input two numbers and an operator from user.
#include<stdio.h>

int main(){

    int a, b; //4 bytes each
    char ch;  //1 byte
    scanf("%d",&a);
    scanf("%c",&ch);
    scanf("%d",&b);
    switch (ch){
        case '+' :
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '/':
        printf("%f",(float)a/b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '%':
        printf("%d",a%b);
        break;
        default:
        printf("Wrong operator");
    }
   return 0;
}

//Total 9 bytes are use