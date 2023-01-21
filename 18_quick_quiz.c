#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks: \n");
    scanf("%d",&marks);
    if(marks<70){
        printf("F\n");
    }
    else if(marks<80){
        printf("D\n");
    }
    else if(marks<90){
        printf("C\n");
    }   
    else if(marks<100){
        printf("B\n");
    }
    else{
        printf("A\n");
    }
    return 0;
}