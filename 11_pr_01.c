#include<stdio.h>

int main(){
    
    // int a; int b=a; 
    // int v = 3^3;
    // char dt = '2';
    // float d = (3.0/8-2);
    // printf("%d\n",v);
    // printf("%f", d);
    // return 0;
    // Q.3 write a program to determine whether a number is divisible by 97 or not?
    int num;
    printf("Enter the number: ");
    scanf("%d",& num);
    printf("Divisibility test result: %d\n", num%97);
    
    // Q.4 explain step by step of 3*x/y-z +k
    int x = 2;
    int y = 3;
    int z = 3;
    int k = 1;
    printf("The value of given product is: %d",3*x/y-z +k);
    return 0;
}