// WAP to get largest of 3 numbers using a function
#include <stdio.h>
int find_largest(int a, int h, int p)
{
    if (a >= h && a >= p)
    {
        return a;
    }
    else if (h >= a && h >= p)
    {
        return h;
    }
    else
    {
        return p;
    }
}
int main()
{
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    int result = find_largest(x, y, z);
    printf("Largest number is: %d\n", result);
    return 0;
}