#include<stdio.h>

int main(){
    int i= 932;
    int *ptr;
    int **gtr_gtr;
    ptr = &i;
    gtr_gtr = &ptr;

    printf("The value of i is %u\n",**gtr_gtr);
}