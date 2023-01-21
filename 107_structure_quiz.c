#include<stdio.h>
#include<stdio.h>

typedef struct employe{
    int code;
    float salary;
    char name[88];
}ep;
int main(){
    ep e1,e2,e3;
    printf("Enter the value for code for e1: ");
    scanf("%d",&e1.code);
    printf("Enter the value for salary for e1: ");
    scanf("%f",&e1.salary);
    printf("Enter the value for name for e1: ");
    scanf("%s",e1.name);

    printf("Enter the value for code for e2: ");
    scanf("%d",&e2.code);
    printf("Enter the value for salary for e2: ");
    scanf("%f",&e2.salary);
    printf("Enter the value for name for e2: ");
    scanf("%s",e2.name);

    printf("Enter the value for code for e3: ");
    scanf("%d",&e3.code);
    printf("Enter the value for salary for e3: ");
    scanf("%f",&e3.salary);
    printf("Enter the value for name for e3: ");
    scanf("%s",e3.name);
    printf("\nEmploye e1 all detail\n");
    printf("The code of e1 is %d\n",e1.code);
    printf("The salry of e1 is %f\n",e1.salary);
    printf("Name of the e1 is %s\n",e2.name);
    printf("\nEmploye e2 all detail\n");
    printf("The code of e2 is %d\n",e2.code);
    printf("The salry of e2 is %f\n",e2.salary);
    printf("Name of the e2 is %s\n",e2.name);
    printf("\nEmploye e3 all detail\n");
    printf("The code of e3 is %d\n",e3.code);
    printf("The salry of e3 is %f\n",e3.salary);
    printf("Name of the e3 is %s\n",e3.name);

    return 0;

}