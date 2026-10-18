#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    switch ((int)(age >= 18)) {
        case 0:
            printf("Not eligible to vote\n");
            break;
        case 1:
            printf("Eligible to vote\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}