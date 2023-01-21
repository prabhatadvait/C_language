#include<stdio.h>

int main(){
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of student %d\n",i+1);
        scanf("%d",&marks[i]);// i+1 we have just used it to print 
    }                                  //student name so that it looks good

    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks for student %d is %d\n ",i+1,marks[i]);
    }
    return 0;

}