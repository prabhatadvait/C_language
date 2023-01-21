#include<stdio.h>

int main(){
    int principal,rate,years;
    printf("Enter the principal value: ");
    scanf("%d",&principal);
    printf("Enter the rate value: ");
    scanf("%d",&rate);
    printf("Enter the years: ");
    scanf("%d",&years);
    int simpleInterest = (principal * rate * years)/100;
    printf("The value of simpleinterst is %d \n",simpleInterest);
    
    return 0;
}