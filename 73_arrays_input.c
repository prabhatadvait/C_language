#include<stdio.h>

int main(){
    int marks[4]; //allocating space for 4 integers

    printf("Enter the marks for student1\n");
    scanf("%d",&marks[0]);
    printf("Enter the marks for student2\n");
    scanf("%d",&marks[1]);
    printf("Enter the marks for student3\n");
    scanf("%d",&marks[2]);
    printf("Enter the marks for student4\n");
    scanf("%d",&marks[3]);
    printf("You have entered %d %d %d and %d",marks[0],marks[1],marks[2],   
    marks[3]);

    return 0;
}