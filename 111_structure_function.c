#include<stdio.h>
#include<string.h>

typedef struct employe{
    char name[23];
    int code;
    float salary;
}ep;
void show(ep prabhat){
    printf("The code of employee is %d\n",prabhat.code);
    printf("The salary of employee id: %f\n",prabhat.salary);
    printf("name of the employe is: %s\n",prabhat.name);
    
}
int main(){
    // Declaring prabhat and ptr
    ep prabhat;
    ep *ptr;
    ptr = &prabhat;//Pointing ptr to prabhat

    //Set the number values for prabhat
    ptr->salary = 100.33;
    ptr->code = 233;
    strcpy(ptr->name,"nunu");
    show(prabhat);// using function  
    //Without function.
    // printf("The name of employe is %s\n",prabhat.name);
    // printf("The code of the employe is %d\n",prabhat.code);
    // printf("The salry of the employe is %f\n",prabhat.salary);

}