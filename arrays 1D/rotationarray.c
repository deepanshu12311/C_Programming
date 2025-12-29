//Rotate the given array by k steps, where k is non-negative.
//Note: k can be greater than n as well where n is the size of array.

 #include<stdio.h>
 void reverse(int x[],int si, int ei){
    for(int i=si, j=ei; i<j; i++, j--){
        int temp = x[i];
        x[i] = x[j];
        x[j] = temp;

    }
    return;
    }
 
 int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter number of rotation:");
    scanf("%d",&k); 
    if(k>n){
        k=k%n;
    }
   reverse(arr,0,n-1);
   reverse(arr,0,k-1);
   reverse(arr,n-1,k-1);
   for(int q=0; q<n; q++){
    printf("%d ",arr[q]);
   }
    
    return 0;
 }