#include<stdio.h>
#include<string.h>

typedef struct emplyee{
    char name[33];
    int code;
    float salary;
}ep;

int main(){
    ep prabhat ={"prabhat",44,83.19}; // Intializing structure.
    printf("name is: %s\n",prabhat.name);
    printf("code is: %d\n",prabhat.code);
    printf("salary is: %f\n",prabhat.salary);
    
    return 0;
}