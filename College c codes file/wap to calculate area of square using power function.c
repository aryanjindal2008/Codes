#include <stdio.h>
#include <math.h>
int main(){
    double side,area;
    printf("Enter the length of side of the sqaure:");
    scanf("%lf",&side);
    area=pow(side,2);
    printf("Area of sqaure will be:%.2lf\n",area);
    return 0;}
