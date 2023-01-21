#include<stdio.h>
#include<math.h>  

int main(){
    FILE *ptr;
    char c[43];
    int salary;
    ptr = fopen("pr_04.txt","w");   
    printf("Enter the name of employee\n");
    scanf("%s",c);
    printf("Enter the salary of employee\n");
    scanf("%d",&salary);
    fprintf(ptr,"%s,%d\n",c,salary);
    printf("Enter the name of employee\n");
    scanf("%s",c);
    printf("Enter the salary of employee\n");
    scanf("%d",&salary);
    fprintf(ptr,"%s,%d\n",c,salary);
    fclose(ptr);

    return 0;
}