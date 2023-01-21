#include<stdio.h>
#include<string.h>
typedef struct employe{
    int code;
    float salary;
    char name[30];

}ep;

int main(){
    ep facebook[100];
    facebook[0].code = 100;
    facebook[0].salary = 93.5;
    strcpy(facebook[0].name ,"prabhat");
    
    facebook[1].code = 100;
    facebook[1].salary = 93.5;
    strcpy(facebook[1].name ,"umesh");

    facebook[2].code = 100;
    facebook[2].salary = 93.5;
    strcpy(facebook[2].name ,"sakaldeep");

    facebook[3].code = 100;
    facebook[3].salary = 93.5;
    strcpy(facebook[3].name ,"panduranga");

    facebook[4].code = 100;
    facebook[4].salary = 93.5;
    strcpy(facebook[4].name ,"dailypaul");
    
    printf("%s\n",facebook[0].name);
    printf("%d\n",facebook[0].code);
    printf("%f\n",facebook[0].salary);
    
    printf("%s\n",facebook[1].name);
    printf("%d\n",facebook[1].code);
    printf("%f\n",facebook[1].salary);

    printf("%s\n",facebook[2].name);
    printf("%d\n",facebook[2].code);
    printf("%f\n",facebook[2].salary);

    printf("%s\n",facebook[3].name);
    printf("%d\n",facebook[3].code);
    printf("%f\n",facebook[3].salary);

    printf("%s\n",facebook[4].name);
    printf("%d\n",facebook[4].code);
    printf("%f\n",facebook[4].salary);
    return 0;
}