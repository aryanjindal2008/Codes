// WAP print sum of 1 to n numbers using a function
#include <stdio.h>
long long calculate_sum(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Please enter a number greater than or equal to 1.\n");
    } else {
        long long total_sum = calculate_sum(n);
        printf("The sum of numbers from 1 to %d is: %lld\n", n, total_sum);
    }
    return 0;
}
