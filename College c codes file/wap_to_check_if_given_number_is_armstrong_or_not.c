#include <stdio.h>
#include <math.h>
int main(){
    int num,orignalNum,remainder,result=0,digits=0;
    printf("Enter an integer:");
    scanf("%d",&num);
    orignalNum=num;
    int temp=num;
    while(temp !=0){
        temp/=10;
        digits++;

    }
    temp=num;
    while(temp!=0){
        remainder=temp%10;
        result += remainder * remainder * remainder;
        temp/=10;

    }
    if (result==orignalNum){
        printf("%d is an armstrong number.\n",orignalNum);

    }else{
        printf("%d is Not armstrong number.\n ",orignalNum);

    }
    return 0;
}