#include<stdio.h>
void strcopykr(char *ptr,char *str){
    int i = 0;
    int temp;
    while(i<12){
        temp = ptr[i];
        ptr[i]=str[i];
        str[i]=temp;
        i++;
    }
}
int main(){
    char source[14]= "prabhat";
    char target[12]="harry";
    strcopykr(target,source);
    printf("The value of target is  %s\n",target);
    printf("The value of target is  %s\n",source);
    // strcpy(target,source);
    // printf("%s\n",target);
    return 0;
}