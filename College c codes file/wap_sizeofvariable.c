//write a program to display size of a inputted variable
#include <stdio.h>
int main(){
    double a;
    printf("Enter the value of a to display its size:\n");
    scanf("%lf",&a);
    printf("size of variable a is:%lu bytes\n",sizeof(a));
    return 0;
}