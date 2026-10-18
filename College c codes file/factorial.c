#include <stdio.h>
long long calculate_factorial(int n) {
    if (n < 0) {
        return -1; // Indicates error for negative numbers
    }
    
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main() {
    int number;
    printf("Enter a number to find its factorial (with argument): ");
    scanf("%d", &number);
     long long fact = calculate_factorial(number);
     if (fact == -1) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is: %lld\n", number, fact);
    }
    return 0;
}