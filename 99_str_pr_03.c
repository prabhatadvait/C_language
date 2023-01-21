#include<stdio.h>
// #include<string.h>
int strleng(char *gt){
    char *ptr = gt;
    int len=0;
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    return len;
}


int main(){
    char st[]="prabhat";
    int l = strleng(st);
    printf("The length of string is %d\n",l);
    
    return 0;
}