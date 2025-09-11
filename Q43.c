/*Write a program to check if a number is a strong number.*/
#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, original, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n > 0) {
        digit = n % 10;            // Extract last digit
        sum += factorial(digit);   // Add factorial of the digit
        n = n / 10;                // Remove last digit
    }

    if(sum == original) {
        printf("%d is a strong number.\n", original);
    } else {
        printf("%d is not a strong number.\n", original);
    }

    return 0;
}
