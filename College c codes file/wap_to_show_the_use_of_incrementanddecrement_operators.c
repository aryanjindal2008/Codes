#include <stdio.h>
int main() {
    int h = 5;

    printf("h = %d\n", h);
    printf("++h = %d (Pre-increment)\n", ++h);
    printf("h++ = %d (Post-increment)\n", h++);
    printf("h after post-increment = %d\n",h);

    printf("--h = %d (Pre-decrement)\n", --h);
    printf("h-- = %d (Post-decrement)\n", h--);
    printf("h after post-decrement = %d\n", h);

    return 0;
}