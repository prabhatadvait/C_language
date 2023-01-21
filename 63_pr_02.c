#include<stdio.h>
void printAdd(int a){  //declaration 
    printf("The address of variable a is %u\n",(&a));// we can also define function here
}

int main(){
    int i=4;
    printf("The value of variabe i is %d\n",i);
    printAdd(i);
    printf("The address of variable  is %u\n",&i);
}