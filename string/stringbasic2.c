#include<stdio.h>
int main (){
   char arr[]={'h','e','l','l','o'};
    for(int i=0;i<5;i++){
        printf("%c",arr[i]);
    }
    printf("\n");
    char ch='A';
    printf("%c\n",ch);
    printf("%p\n",&ch);
    printf("%d\n",(int)ch);
    printf("%d\n",sizeof(int));
    return 0;
}

// null character= \0