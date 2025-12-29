#include <stdio.h>
int main()
{
    int arr[5]={10,2,300,400,50};
    printf("Before sorting:\n");
    for(int k=0;k<5;k++){
        printf("%d\t",arr[k]);
    }
    for(int i=0;i<5-1;i++){
        int min_idx=i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        if(min_idx!=i){
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }
printf("\nAfter sorting:\n");
     for(int k=0;k<5;k++){
        printf("%d\t",arr[k]);
    }
    return 0;
}