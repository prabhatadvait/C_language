#include<stdio.h>
#include<string.h>

typedef struct prabhat{
    int code;
    float salary;
    char name[22];
}pk;

int main(){
    pk rohan;
    pk *ptr;
    ptr = &rohan;
    ptr->code = 38;
    ptr->salary = 75.34;
    strcpy(ptr->name,"rohandas");
    printf("The value of code for rohan is %d\n",ptr->code);
    printf("The salary of rohan is %f\n",ptr->salary);
    printf("Name of rohan is %s\n",ptr->name);
    
    return 0;
}