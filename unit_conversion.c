/*
kms to miles
inches to foot
cms to inches
pond to kgs
meters to inches
*/
// #include <stdio.h>

// int main() {
//     int choice; // Use an integer for switch
//     float n, i;

//     label: // Loop point
    
//     printf("\n--- Unit Converter ---\n");
//     printf("1. Kms to Miles\n");
//     printf("2. Inches to Foot\n");
//     printf("3. Cms to Inches\n");
//     printf("4. Pound to Kgs\n"); // 
//     printf("5. Meters to Inches\n");
//     printf("0. Quit\n");
    
//     printf("Select an option (number): ");
//     scanf("%d", &choice);

//     if (choice == 0) {
//         return 0;
//     }

//     printf("Enter number to convert: ");
//     scanf("%f", &n);

   
//     switch (choice) {
//         case 1:
//             i = n * 0.621371;
//             printf("%.2f Miles\n", i);
//             break;
//         case 2:
//             i = n * 0.0833333;
//             printf("%.2f Foot\n", i);
//             break;
//         case 3:
//             i = n * 0.393701;
//             printf("%.2f Inches\n", i);
//             break;
//         case 4:
//             i = n * 0.453592;
//             printf("%.2f Kgs\n", i);
//             break;
//         case 5:
//             i = n * 39.3701;
//             printf("%.2f Inches\n", i);
//             break;
//         default:
//             printf("Invalid operation\n");
//             break;
//     }
    
//     goto label; 
    
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char arr[50];
    float n, i;

    label:
    printf("\nSelect unit (kms, inches, cms, pound, meters, quit): ");
    scanf("%s", arr); 

  
    if (strcmp(arr, "quit") == 0) {
        return 0;
    }

    printf("Enter number: ");
    scanf("%f", &n);

    if (strcmp(arr, "kms") == 0) {
        i = n * 0.621371;
        printf("%f miles\n", i);
    } 
    else if (strcmp(arr, "inches") == 0) {
        i = n * 0.0833333;
        printf("%f foot\n", i);
    }
    else if (strcmp(arr, "cms") == 0) {
        i = n * 0.393701;
        printf("%f inches\n", i);
    }
    else if (strcmp(arr, "pound") == 0) {
        i = n * 0.453592;
        printf("%f kgs\n", i);
    }
    else if (strcmp(arr, "meters") == 0) {
        i = n * 39.3701;
        printf("%f inches\n", i);
    }
    else {
        printf("Invalid operation\n");
    }

    goto label;
}