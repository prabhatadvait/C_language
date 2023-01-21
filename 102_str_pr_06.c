#include<stdio.h>
void encrypt(char *ptr){
    while(*ptr!='\0'){
        *ptr = *ptr + 1;
        ptr++;
    }
}
int main(){
    char st[]="prabhat is governor of coding.";
    

    // we can do also do like that.
    // char st[44];
    // printf("Enter the character that you want to encrypt:\n");
    // scanf("%s",st);
    encrypt(st);
    printf("The encrypted st is %s\n",st);
    
    return 0;
}