#include<stdio.h>
int main(){
    char arr[]={'H','e','l','l','o','\0'};
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
printf("\n");

char brr[]="Hello my name is deepanshu";
int j=0;
while(brr[j]!='\0'){
    printf("%c",brr[j]);
    j++;
}
printf("\n");

    return 0;
}