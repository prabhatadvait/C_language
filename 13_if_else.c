#include<stdio.h>

int main(){
    int age;
    printf("Enter the number \n");
    scanf("%d",&age);

    if(age>=90){
        printf("You can not drive the car,you are above 90\n");
    }
    else{
        printf("You can drive");
    }
    if(age==50){
        printf("Half century\n");
    }

    return 0;
}