#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
for(int j=0;j<n;j++)
scanf("%d",&arr[i][j]);

    }
    printf("\n");
    for(int k=0;k<n;k++){
        for(int g=0;g<n;g++)
        printf("%d ",arr[k][g]);
printf("\n");
    }
    printf("\n");
    int brr[n][n];
    
    for(int s=0;s<n;s++){
for(int l=0;l<n;l++)
brr[s][l]=arr[l][s];
    }
      
    for(int m=0;m<n;m++){
        for(int a=0;a<n;a++)
        printf("%d ",brr[m][a]);
printf("\n");}
    

    return 0;
    }