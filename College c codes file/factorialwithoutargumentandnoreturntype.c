#include <stdio.h>
void calculate_factorial_no_arg() {
    int n;
    printf("Enter a number to find its factorial (without argument): ");
    scanf("%d", &n);   
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return;
    }   
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }   
    printf("Factorial of %d is: %lld\n", n, result);
}
int main() {
    calculate_factorial_no_arg();
    return 0;
}