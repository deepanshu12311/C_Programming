#include<stdio.h>

int main(){
    void fun(); //This is function prototype
    fun();
    return 0;
}
void fun(){
    printf("Hello World");
    return;
}