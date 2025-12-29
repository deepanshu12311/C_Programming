#include<stdio.h>
int main(){
 char arr[5]={'a','b','c','d','e'};
    for(int i=0;i<5;i++){
        printf("%c\n",arr[i]);
    }
      for(int i=0;i<5;i++){
        printf("%p\n",&arr[i]);
    }
 
    int brr[5]={1,2,3,4,5};
     for(int i=0;i<5;i++){
        printf("%d\n",brr[i]);
    }
      for(int i=0;i<5;i++){
        printf("%p\n",&brr[i]);
    }
    char ch = 'A';
    int x= (int)ch;
    printf("%d\n",x);
     char br = 'B';
    
    printf("%d\n",(int)br);
    for(int j=65;j<=90;j++){
      printf("%c ",(char)j);
    }
     
    for(int j=97;j<=122;j++){
      printf("%c ",(char)j);
    }
    printf("\n");
    char ah='0';
    printf("%d",(int)ah);
    return 0;
}

//Strings are used to store words, sentences, and whole phase....