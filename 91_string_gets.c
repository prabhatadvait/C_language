#include<stdio.h>

int main(){
    char n[84];
    printf("Enter your name sir/mam:  ");
    gets(n); // gets is a function like scanf which takes input used for multiple strings
    printf("Your name is %s\n",n);
    
    return 0;
}