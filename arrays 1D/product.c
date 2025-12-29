#include <stdio.h>
int main(){
    int arr[5];
    int sum=1;
    for(int i=0; i<5; i++){
        
        printf("Enter element %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(int j=0; j<5;j++){
        sum=sum*arr[j];
    }
    printf("sum is %d",sum);
    return 0;
}