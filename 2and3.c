 #include<stdio.h>
 int main(){
 int arr[2][10];
for(int i=0;i<2;i++){
     for(int j=0;j<10;j++){
         arr[i][j]=0;
     }
 }
 for (int i=0;i<2;i++){
     for(int j=0; j<10;j++){
if(i==0){
     arr[i][j]+=2*(j+1);
 }
 if(i==1){
     arr[i][j]+=3*(j+1);
 }
     }
 }
 for(int i=0;i<2;i++){
     for(int j=0;j<10;j++){
       printf("%d ",arr[i][j]);  
     }
     printf("\n");
 }
 printf("\n\n");
 for(int i=1;i<=10;i++){
        printf("%d ",2*i);
    }
    printf("\n");
    for(int i=1;i<=10;i++){
        printf("%d ",3*i);
    }
     return 0;
 }
