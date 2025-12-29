#include <stdio.h>
int main() {
    int n, m;
    printf("Enter a first number: ");
    scanf("%d",&n);
      printf("Enter a first number: ");
    scanf("%d",&m);
    int quotient, remainder;
    quotient = n/m;
    remainder = n%m;
    printf("Quotient: %d\n",quotient);
    printf("Remainder: %d",remainder);
    return 0;
}