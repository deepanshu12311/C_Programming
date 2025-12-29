#include<stdio.h>
int main(){
int i, j, row1, row2, col1, col2;
printf("Enter rows for 1st matrix:");
scanf("%d",&row1);
printf("Enter columns for 1st matrix:");
scanf("%d",&col1);
printf("Enter rows for 2nd matrix:");
scanf("%d",&row2);
printf("Enter columns for 2nd matrix:");
scanf("%d",&col2);
if(row1!=row2 || col1!=col2){
    printf("The martixs are not possible to add or substract");
    return 0;
}
int arr[row1][col1], brr[row1][col1];
printf("Enter values in matrix 1:");
for(i=0;i<row1;i++){
for(j=0;j<col1;j++)
scanf("%d",&arr[i][j]);
}
printf("Enter values in matrix 2:");
for(i=0;i<row2;i++){
for(j=0;j<col2;j++)
scanf("%d",&brr[i][j]);
}
int crr[row1][col1];
printf("The addition of matrix is");
for(i=0;i<row1;i++){
for(j=0;j<col1;j++)
printf(" %d",crr[i][j]=arr[i][j]+brr[i][j]);
}
    return 0;
}