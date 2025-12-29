#include <stdio.h>
int main()
{
    int arr[5]={10,2,300,400,50};
    printf("Before sorting:\n");
    for(int k=0;k<5;k++){
        printf("%d\t",arr[k]);
    }
    for(int i=0;i<5-1;i++){
        for(int j=0;j<5-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
printf("\nAfter sorting:\n");
     for(int k=0;k<5;k++){
        printf("%d\t",arr[k]);
    }
    return 0;
}