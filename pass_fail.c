#include <stdio.h>
int main()
{
    // int num;
    // printf("Enter marks of a student (0-100): ");
    // scanf("%d",&num);
    // if(num<=30){
    //     printf("FAIL");
    // }
    // else if(num>30 && num<=100){
    //     printf("PASS");
    // }
    // else{
    //     printf("Wrong input..");
    // }
    //     return 0;

    int num;
    printf("Enter marks of student (0-100): ");
    scanf("%d", &num);

    if (num < 30)
    {
        printf("Grade: C");
    }
    else if (num >= 30 && num < 70)
    {
        printf("Grade: B");
    }
    else if (num >= 70 && num < 90)
    {
        printf("Grade: A");
    }
    else if (num >= 90 && num <= 100)
    {
        printf("Grade: A+");
    }
    else
    {
        printf("Invalid marks as input");
    }
    return 0;
}