//Write a program to copy the contents of one array into another array in reverse order without using another array

 #include<stdio.h>
 void reverse(int x[]){
    int i=0;
    int j=4;
    while(i<=j){
        int temp;
        temp=x[i];
        x[i]=x[j];
        x[j]=temp;
        return;
    }
 }
 int main(){
    int arr[5]={1,2,3,4,5};
   reverse(arr);
    for(int j=0; j<5; j++){
        printf("%d ",arr[j]);
    }
    return 0;
 }