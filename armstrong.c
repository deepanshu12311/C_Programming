#include<stdio.h>
#include<math.h>
int main(){
int num;
printf("Enter a number:");
scanf("%d",&num);
int originalNum=num;
int n=0;

for(originalNum=num;originalNum!=0;++n){
    originalNum/=10;
}
originalNum=num;
int remain;
int final=0;
for(originalNum=num;originalNum!=0;originalNum/=10){
remain=originalNum%10;
final+=(int)round(pow(remain,n));
}
if(final==num){
    printf("The number %d is armstrong....",num);
}
else printf("The number %d is not a armstrong....",num);
    return 0;
}