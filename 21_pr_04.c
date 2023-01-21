#include<stdio.h>

int main(){
    
    int years;
    printf("Enter the years\n");
    scanf("%d",&years);
    if(years%4==0){
        printf("This is leap year\n");
    }
    else if(years%100==0){
        printf("This is not leap year\n");
    }
    else if(years%400==0){
        printf("This is leap year\n");
    }
    else{
        printf("This is not leap year\n");
    }
    return 0;
}