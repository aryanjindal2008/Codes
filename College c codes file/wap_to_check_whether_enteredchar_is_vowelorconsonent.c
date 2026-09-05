#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    printf("Enter a character :\n");
    scanf("%c",&ch);
    if(isalpha(ch)){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            printf("Entered character is a vowel.\n",ch);

           }else{
            printf("Entered character is a consonaHnt,\n",ch);
           }
    }else{
        printf("Entered character is not a alphabet letter.\n",ch);

    }
    return 0;

    
}
