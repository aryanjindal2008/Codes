//WAP to swap two no. using call by value & call by reference. 
#include <stdio.h>
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 5, y = 10;
    printf("Before swap (Call by Value): x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After swap (Call by Value): x = %d, y = %d (Values did not change)\n\n", x, y);
    printf("Before swap (Call by Reference): x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After swap (Call by Reference): x = %d, y = %d (Values are swapped)\n", x, y);
    return 0;
}