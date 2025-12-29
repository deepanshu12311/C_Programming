//WAP to print odd numbers from 0 to 100
// we don't that much use contiue;
#include<stdio.h>
int main(void)
{
   // for (int i = 1; i <= 100; i=i+2)
  //  {
  //      printf("%d ",i);
  //  }
  // This can also be use
  for (int i = 1; i <= 100; i=i+2)
  {
    if (i%2==0) //even 
    continue;
  }
  printf("%d ",i);
        return 0;
} 