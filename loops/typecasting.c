#include <stdio.h>
int main(void)
{
    for (int i = 65; i <= 90; i++)
    {
        printf("%d ", i);
        char ch = (char)i;
        printf("%c\n", ch);
    }
    return 0;
}