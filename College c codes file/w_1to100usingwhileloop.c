#include <stdio.h>
int main(){
    int limit,i;
    printf("Enter the limit :");
    scanf("%d",&limit);
    //loop for even
    printf("Even numbers up to %d\n",limit);
    i=1;
    while(i<=limit){
        if(i%2==0){
            printf("%d ",i);
        }
        i++;
    }
    //loop for odd
    printf("\nOdd numbers up to %d\n",limit);
    i=1;
    while(i<=limit){
        if(i%2!=0){
            printf("%d ",i);

        }
        i++;
    }
    printf("\n");
    return 0;
}

