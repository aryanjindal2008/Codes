#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter the marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid input!\n");
        return 0;
    }

    switch (marks / 10) {
        case 10:
        case 9:  grade = 'A'; break;
        case 8:  grade = 'B'; break;
        case 7:  grade = 'C'; break;
        case 6:  grade = 'D'; break;
        case 5:
        case 4:  grade = 'E'; break;
        default: grade = 'F'; break;
    }

    printf("Grade: %c\n", grade);
    return 0;
}