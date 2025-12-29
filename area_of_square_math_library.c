#include<stdio.h>
#include<math.h>
int main(){
    int side, area;
    printf("Enter the length of side of the square: ");
    scanf("%d",&side);
    area=pow(side,2);
    printf("The area of square is %d",area);
    return 0;
}