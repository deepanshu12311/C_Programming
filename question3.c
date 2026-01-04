//In C, I have this line : int x = 020;.
//What does printf("%d",x); print?
#include <stdio.h>
int main(){
    int x = 020;
    printf("%d",x); //output 16
    return 0;
}