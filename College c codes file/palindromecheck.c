//WAP to check if a number is palindrome using a function
#include <stdio.h>

int check_palindrome(int n) {
    int original = n;
    int reversed = 0;
    
    while (n > 0) {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    if (original == reversed) {
        return 1; // True, it is a palindrome
    } else {
        return 0; // False, not a palindrome
    }
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Negative numbers are not palindromes.\n");
    } else if (check_palindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }
    
    return 0;
}