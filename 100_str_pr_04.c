#include<stdio.h>
void strslice(char *ptr,int n,int m){
    int i=0;
    while((n+i)<m){
        ptr[i]=ptr[n+i];
        i++;
    }
    // ptr[i]='/0';
}

int main(){
    char str[]= "prabhatadvait";
    strslice(str,1,7);
    
    printf("The character after slicing is %s\n",str);
    
    return 0;
}