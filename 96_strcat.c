#include<stdio.h>
#include<string.h>

int main(){
    char st1[34] = "prabhat";
    char st2[44]  = "sharma";
    strcat(st1,st2);
    printf("The str1 is  %s\n",st1);
    // strcat(st2,st1);
    // printf("The str2 is  %s\n",st2);  we can put this.
    
    return 0;
}