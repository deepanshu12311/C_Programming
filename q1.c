//WAP to find the number missing in  an array from 0 to n
#include <stdio.h>

int main() {
    int n;
    
    // 1. Input the number of elements present in the array
    printf("Enter number of elements to be listed in an array: ");
    scanf("%d", &n);
    
    int arr[n];
    int current_sum = 0;
    
    // 2. Input elements and calculate sum simultaneously
    printf("Enter elements in array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        current_sum += arr[i]; // Optimization: You can sum while scanning!
    }

    // 3. Calculate expected sum for range 0 to n
    // Formula for sum of 0..n is: (n * (n+1)) / 2
    int expected_sum = (n * (n + 1)) / 2;
    
    // 4. The difference is the missing number
    int missing_num = expected_sum - current_sum;

    printf("The missing number is %d.\n", missing_num);

    return 0;
}