#include <stdio.h>
int main(){
    float radius,volume;
    printf("Enter the radius of the sphere:");
    scanf("%f",&radius);
    volume=(4.0/3.0)*3.14159*radius*radius*radius;
    printf("Volume of sphere=%.2f\n",volume);
    return 0;
    }
