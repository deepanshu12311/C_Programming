#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // CHECK 1: Did the user provide enough inputs?
    if (argc < 4) 
    {
        printf("Error: You need to provide inputs.\n");
        printf("Usage: ./a.out <operation> <num1> <num2>\n");
        return 1; // Stop the program here
    }

    char *operation;
    int num1, num2;

    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    printf("Operation is %s\n", operation);
    printf("num1 is %d\n", num1);
    printf("num2 is %d\n", num2);

    if (strcmp(operation, "add") == 0)
    {
        printf("Result: %d\n", num1 + num2);
    }
    else if (strcmp(operation, "sub") == 0)
    {
        printf("Result: %d\n", num1 - num2);
    }
    else if (strcmp(operation, "mul") == 0)
    {
        printf("Result: %d\n", num1 * num2);
    }
    else if (strcmp(operation, "div") == 0)
    {
        // CHECK 2: Are we dividing by zero?
        if (num2 == 0)
        {
            printf("Error: Cannot divide by zero.\n");
        }
        else
        {
            printf("Result: %d\n", num1 / num2);
        }
    }
    else
    {
        printf("Error: Invalid operation. Use add, sub, mul, or div.\n");
    }
getchar();
    return 0;
}