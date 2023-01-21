#include<stdio.h>
int occurence(char *str,char n){
    int count =0;
    while(*str!='\0'){
        if(*str==n){
            count++;
        }str++;
    }
    return count;
}

int main(){
    char c[]= "prabhat777";
    int ginttikr = occurence(c,'7');
    printf("There are %d character in string c\n",ginttikr);
    

    
    return 0;
}