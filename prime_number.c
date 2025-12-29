//Printing all prime number from 1 to 100
#include<stdio.h>
int main(){
    int i,j,flag;
    printf("Prime numbers between 1 and 100 are:\n");
    for(i=2;i<=100;i++){
        flag=0;
        for(j=2;j<=10;j++){
            if(i%j==0 && i!=j){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d ",i);
        }
    }   
    
return 0;
}