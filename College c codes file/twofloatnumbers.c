//Wap to create a function max that takes two float numbers and return the largest value
#include <stdio.h>
float max(float a, float h) {
    if (a > h) {
        return a;
    } else {
        return h;
    }
}
int main() {
    float x, y;   
    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);
    float result = max(x, y);    
    printf("Largest value is: %.2f\n", result);
    return 0;
}