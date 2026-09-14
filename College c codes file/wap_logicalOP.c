//write a program to demonstrate all logical operators
#include <stdio.h>
int main(){
    int a=10,h=20,c=0;
    if (a>5 && h>15){
        printf("AND operator: Both condition are TRUE (Result:1)\n");
    }else{
        printf("AND operator: At least one condition is TRUE (Result:0)\n");
    }
    if (a>15 || h>15){
        printf("OR operator: At least one condition is TRUE (Result:1)\n ");
    }else{
        printf("OR operator: Both condition are TRUE (Result:0)\n");
    }
    printf("NOT operator on 'c' (c=%d): !c=%d\n",c,!c);
    printf("NOT operator on 'a' (a=%d): !a=%d\n",a,!a);
    return 0;
}