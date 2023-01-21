#include<stdio.h>
int main(){
    int num;
    
    FILE *ptr;
    ptr = fopen("last.txt","r");
    fscanf(ptr,"%d",&num);
    
    ptr = fopen("last.txt","w");
    fprintf(ptr,"The value of num is %d\n",num*2);
    fclose(ptr);
    return 0;
}//This is called prabhat's power >>helped by harry.