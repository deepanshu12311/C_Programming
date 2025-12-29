// Take input percentage of a student and print the grade according to marks:
/*
1. 90-100 Excellent
2. 80-90 Very Good
3. 70-80 Good
4. 60-70 Can do better
5. 50-60 Average
6. 40-50 Below Average
7. <40 Fail
*/
#include <stdio.h>
int main(void)
{
    float x;
    printf("Enter percentage:");
    scanf("%f", &x);
    if (x >= 91 && x <= 100)
    {
        printf("Excellent");
    }
    if (x >= 81 && x <= 90)
    {
        printf("Very Good");
    }
    if (x >= 71 && x <= 80)
    {
        printf("Good");
    }
    if (x >= 61 && x <= 70)
    {
        printf("can do better");
    }
    if (x >= 51 && x <= 60)
    {
        printf("Average");
    }
    if (x >= 41 && x <= 50)
    {
        printf("Below Average");
    }
    if (x<=40)
    {
        printf("fail");
    }

    return 0;
}