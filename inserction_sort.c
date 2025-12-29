#include <stdio.h>
int main()
{
    int arr[5]={10,2,300,400,50};
    printf("Before sorting:\n");
    for(int k=0;k<5;k++){
        printf("%d\t",arr[k]);
    }
    for(int i=1;i<5;i++){
        int temp = arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>temp){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
printf("\nAfter sorting:\n");
     for(int k=0;k<5;k++){
        printf("%d\t",arr[k]);
    }
    return 0;
}