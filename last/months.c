#include<stdio.h>

int main(){
    int n;
    printf("Enter the month:");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("January");
        break;
        case 2:
        printf("February");
        break;
        case 3:
        printf("March");
        break;
        case 4:
        printf("April");
        break;
        case 5:
        printf("May");
        break;
        case 6:
        printf("June");
        break;
        case 7:
        printf("July");
        break;
        case 8:
        printf("August");
        break;
        case 9:
        printf("September");
        break;
        case 10:
        printf("October");
        break;
        case 11:
        printf("November");
        break;
        case 12:
        printf("December");
        break;
        default:
        printf("Not a month");
        break;
    }
    switch (n)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf(" 31 Days.");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
    printf(" 30 Days.");
    break;
    case 2:
    printf(" 28/29 Days.");
    break;
    }
    return 0;
}