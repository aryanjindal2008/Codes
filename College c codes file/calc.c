// wap to create a basic calculator using switch case
#include <stdio.h>

int main() {
    float h, a;
    char op;

    printf("Enter the value of h and a\n");
    scanf("%f %f", &h, &a);

    printf("Enter the operator to perform calculation:\n");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("h+a=%f", h + a);
            break;
        case '-':
            printf("h-a=%f", h - a);
            break;
        case '*':
            printf("h*a=%f", h * a);
            break;
        case '/':
            printf("h/a=%f", h / a);
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}