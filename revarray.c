#include<stdio.h>
void revarray(int arr[]){
 int temp;
    for(int i=0;i<7/2 ;i++){
       temp=arr[i];
       arr[i]=arr[6-i];
       arr[6-i]=temp;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    printf("Before reversing.\n");
    for(int i=0;i<7;i++){
        printf("Element %d is %d\n",i+1,arr[i]);
    }
     revarray(arr);
    printf("After reversing.\n");
    for(int i=0;i<7;i++){
        printf("Element %d is %d\n",i+1,arr[i]);
    }
    printf("%p",&arr);
    return 0;
}