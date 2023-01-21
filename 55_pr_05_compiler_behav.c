#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("The order of %d% d %d\n",a,++a,a++);
    //This depend on the behaviour of compiler .
    return 0;
}