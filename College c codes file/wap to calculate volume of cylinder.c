#include <stdio.h>
#define PI 3.14159
int main(){
    double radius,height,volume;
    printf("Enter the radius of cylinder:\n");
    scanf("%lf",&radius);
    printf("Enter the height of cylinder:\n");
    scanf("%lf",&height);
    volume=PI*radius*radius*height;
    printf("The volume of the cylinder will be:%.2lf",volume);
    return 0;}
