// write a program to demonstrate the use of assignment operators
#include <stdio.h>
int main(){
    int h;
    printf("Enter the value of h:");
    scanf("%d",&h);
    h+=14;
    printf("h+=14:%d\n",h);
    h-=26;
    printf("h-=26:%d\n",h);
    h*=14;
    printf("h*=14:%d\n",h);
    h/=26;
    printf("h/=26:%d\n",h);
    return 0;
}