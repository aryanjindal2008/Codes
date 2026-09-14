//write a program to demonstrate all arithmetic operators
#include <stdio.h>
int main(){
    int a,h;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of h:");
    scanf("%d",&h);
    printf("sum of a and h=%d\n",a+h);
    printf("difference of a an h=%d\n",a-h);
    printf("multiplication of a and h=%d\n",a*h);
    printf("division of a and h=%d\n",a/h);
    printf("modulus of a and h=%d\n",a%h);
    return 0;
}