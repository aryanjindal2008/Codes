#include <stdio.h>
int main(){
    double length,breadth,area;
    printf("Enter the length of rectangle:");
    scanf("%lf",&length);
    printf("Enter the breadth of rectangle:");
    scanf("%lf",&breadth);
    area=length*breadth;
    printf("The area of rectangle will be:%.2lf\n",area);
    return 0;}

