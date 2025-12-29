//Write a program to copy the contents of one array into another array in reverse order.
 #include<stdio.h>
 int main(){
    int arr[5]={1,2,3,4,5};
    int brr[5];
    for(int i=0; i<5; i++){
        brr[i]=arr[4-i];
    }
    for(int k=0; k<5; k++){
        arr[k]=brr[k];
    }
    
    for(int j=0; j<5; j++){
        printf("%d ",arr[j]);
    }
    return 0;
 }