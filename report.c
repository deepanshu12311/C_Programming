#include <stdio.h>

int main() {
    int marks[50];
    int freq[11] = {0};   // 0-9,10-19,...,90-99,100
    int i, group;

    printf("Enter marks of 50 students (0 to 100):\n");

    for (i = 0; i < 50; i++) {
        scanf("%d", &marks[i]);

        if (marks[i] == 100)
            freq[10]++;          // group for 100
        else {
            group = marks[i] / 10;
            freq[group]++;
        }
    }

    printf("\nMarks Group\tNumber of Students\n");

    for (i = 0; i < 10; i++) {
        printf("%d - %d\t\t%d\n", i*10, i*10 + 9, freq[i]);
    }

    printf("100\t\t%d\n", freq[10]);

    return 0;
}