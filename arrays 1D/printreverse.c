#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++)
    {
        printf("\nEnter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The reverse order is:\n");
   for(int j=4;j>=0;j--)
   {
    printf("%d\n",arr[j]);
   }
    return 0;
}