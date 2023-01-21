#include<stdio.h>
void occurence(char *str,char n){
        if(*str==n){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
}
int main(){
    char c[]= "prabhat777";
    occurence(c,'5');
   return 0;
}