#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Multiplication of %d\n",n);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d", n, i, n*i);
        printf("\n\a");
    }
    return 0;
}