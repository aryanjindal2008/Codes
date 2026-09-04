#include <stdio.h>
int main(){
    char name[50];
    int age;
    printf("Enter your name:");
    scanf("%[^\n]", name);
    printf("enter your age:");
    scanf("%d",&age);
    printf("PERSONAL DETAILS\n");
    printf("Name : %s\n", name);
    printf("Age  : %d\n", age);
    return 0;
}
