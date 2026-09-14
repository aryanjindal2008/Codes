//write a program to display the use of ternary operator
#include <stdio.h>
int main(){
    int num=7;
    (num%2==0) ? printf("%d is Even\n",num):printf("%d is Odd\n",num);
    int max=(10>20) ?10:20;
    printf("Max value: %d\n",max);
    return 0;
}