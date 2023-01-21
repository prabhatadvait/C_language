#include<stdio.h>

int main(){
    int i=32;
    int *j = &i; //In j variable the address of i is stored
    // to access the value of i *j is used.
    // j have also it's own address.
    // the value of j is address of i.
    printf("The value of i is %d\n",*j);
    printf("The value of i is %d\n",i);
    printf("The address of i is %u\n",j);
    printf("The address of i is %u\n",&i);
    printf("The address of j is %u\n",&j);
    printf("The value of j is %u\n",*(&j));
    return 0;
}