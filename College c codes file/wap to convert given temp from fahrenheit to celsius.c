#include <stdio.h>
int main(){
    double fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit:\n");
    scanf("%lf", &fahrenheit);
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    printf("Temperature in Celsius: %.2lf\n", celsius);
    return 0;}
