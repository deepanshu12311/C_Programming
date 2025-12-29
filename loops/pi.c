#include <stdio.h>
int main() {
double pi = 0.0;
int numOfTerms, count;
printf("Number of terms (must be 1 or larger) : ");
scanf("%d", &numOfTerms);
for (count=0; count < numOfTerms; count++) {
if (count % 2) {
pi -= 4.0 / (2 * count + 1); /* odd term -- subtract */
}
else {
pi += 4.0 / (2 * count + 1); /* even term -- add */
}
printf("The approximate value of pi is %f\n", pi);
}
}
