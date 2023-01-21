#include <stdio.h>
int main(){
    int a,b;
    // int c = a+b; if we write here it will not work
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    int c= a+b; //Then,this will work
    printf("The sum of a and b is %d",c);
    // we can also write upperline code like
    // printf("The sum of a and b is %d",a+b);
    return 0;
}