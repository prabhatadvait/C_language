#include<stdio.h>

int main(){
    int a = 4;
    int *ptr;
    ptr = &a;
    printf("address of a is %u\n",ptr);
    printf("The value of a is %d\n",*ptr);
    printf("The address of ptr is %u\n",&ptr);
    printf("The value of a ptr is %u\n",&a);

}