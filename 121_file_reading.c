#include<stdio.h>
int main(){
    int num;
    int num2;
    FILE *ptr;
    ptr = fopen("prabhat.txt","r");
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);
    fclose(ptr);
    printf("The value of num is %d\n",num);
    printf("The value of num2 is %d\n",num2);
    return 0;
}