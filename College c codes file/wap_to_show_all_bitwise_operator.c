#include <stdio.h>
int main()
{
    int a = 14;
    int h = 26;

    printf("a = %d, h = %d\n\n", a, h);

    printf("Bitwise AND (a & h)  : %d\n", a & h);
    printf("Bitwise OR  (a | h)  : %d\n", a | h);
    printf("Bitwise XOR (a ^ h)  : %d\n", a ^ h);
    printf("Bitwise NOT (~a)     : %d\n", ~a);
    printf("Left Shift  (a << 1) : %d\n", a << 1);
    printf("Right Shift (a >> 1) : %d\n", a >> 1);

    return 0;
}