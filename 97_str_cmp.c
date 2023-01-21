#include<stdio.h>
#include<string.h>

int main(){
    char st1[44]= "Hello";
    char *st2 = "Hezlo";
    int val = strcmp(st1,st2);
    printf("The val is %d",val);    
    return 0;
}