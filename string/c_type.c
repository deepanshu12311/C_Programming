#include <stdio.h>

int main()
{ char str[2][5] = {"EVEN","ODD"};
int j;
printf("Enter The Number:");
scanf("%d",&j);
printf("\n The number is %s",str[j%2]);
return 0;
}
