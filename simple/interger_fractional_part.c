#include <stdio.h>

int main(void)
{
  float x;
  printf("enter a decimal number:\n");
  scanf("%f",&x);
  int y;
  y=x;
  printf("interger part:%d\n",y);

  float z;
  z=x-y;
  printf("fractional part:%f",z);
    
     return 0;
}