#include<stdio.h>
#include<string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[10];
}ep;
int main(){
//    int a = 34;
//    char b = 'o';
//    float d = 234.44;

    ep e1;
    //we can also write like --> struct employee
    e1.code = 100;
    e1.salary = 34.454;
    strcpy(e1.name,"Prabhat");
    printf("%d\n",e1.code);
    printf("%f\n",e1.salary);
    printf("%s\n",e1.name);
    return 0;
}