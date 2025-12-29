#include <stdio.h>
void swap(int x[]){
    int temp ;
    temp= x[0];
    x[0]=x[1];
    x[1]=temp;
    return ;
}
int main()
{
    int arr[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter number: ");
        scanf("%d",&arr[i]);
    }
    swap(arr);
    printf("%d %d ", arr[0],arr[1]);
    return 0;
}