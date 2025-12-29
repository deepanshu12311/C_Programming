//Find the total number of pairs in the array whose sum is equal to the given value x.
#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    int x;
    printf("Enter a value: ");
    scanf("%d",&x);
    for (int i=0; i<n; i++){
        printf("Enter value of are elements:");
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int j=0;j<n ; j++){
        for(int k=j+1; k<n; k++){
            if(arr[j]+arr[k]==x){
                count++;
                 printf("(%d %d)\n",arr[j],arr[k]);
            }
        }
    }
    printf("There are total %d pairs",count);

    return 0;
}