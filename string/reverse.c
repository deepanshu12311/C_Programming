#include <stdio.h>
#include <string.h> 
int main(){
char st[40];
printf("Enter a string: ");
gets(st);
printf("\n");
puts(st);
printf("\n");
int str[40];
for(int i=0;i<40;i++){
    str[i]=st[40-i];
}
puts(str);

return 0;
}  