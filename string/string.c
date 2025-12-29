#include <stdio.h>
int main(){
    char str[19]="Deepanshu Aggarwal";
int  k=0;
while(str[k]!='\0'){
    printf("%c",str[k]);
    k++;
}
printf("\n");
printf("%c\n",str[5]);
printf("%d",str[10]);

return 0;
}  