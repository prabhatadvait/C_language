#include<stdio.h>
#include<string.h>

typedef struct employee {
    char name[28];
    int code;
    float salary;
}ep;

int main(){
    ep e1;
    ep *ptr;
    ptr = &e1;
    (*ptr).code = 337;//We can also write ptr->code = 337;
    //ptr->code = 337;
    printf("%d\n",e1.code);

    return 0;
}