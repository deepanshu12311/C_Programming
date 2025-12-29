//Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.
#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++){
        printf("Enter value of elements:");
        scanf("%d",&arr[i]);
    }
    for (int j=0; j<n; j++){
        if(j%2==0){
            arr[j]=arr[j]+10;
        }
        else{
            arr[j]=arr[j]*2;
        }
    }
    printf("New series is\n");
    for(int k=0; k<n; k++)
    {
        printf("%d ",arr[k]);
    }
    return 0;
}