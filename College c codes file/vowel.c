// wap to check if the entered letter is a vowel or consonant
#include <stdio.h>

int main() {
    char letter;

    printf("Enter a letter to check if it is a vowel or consonant :");
    scanf(" %c", &letter);

    switch (letter) {
        case 'a':
            printf("Vowel");
            break;
        case 'A':
            printf("Vowel");
            break;
        case 'e':
            printf("Vowel");
            break;
        case 'E':
            printf("Vowel");
            break;
        case 'i':
            printf("Vowel");
            break;
        case 'I':
            printf("Vowel");
            break;
        case 'o':
            printf("Vowel");
            break;
        case 'O':
            printf("Vowel");
            break;
        case 'u':
            printf("Vowel");
            break;
        case 'U':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
            break;
    }

    return 0;
}