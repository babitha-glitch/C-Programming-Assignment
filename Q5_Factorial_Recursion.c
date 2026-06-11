
 /*  Q5: Recursive Function to Find
       Factorial of a Non-Negative Integer */

#include <stdio.h>

// Recursive function
long long factorial(int n) {
    // Base case: 0! = 1, 1! = 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case
    return n * factorial(n - 1);
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d = %lld\n", num, factorial(num));
    }

    return 0;
}
