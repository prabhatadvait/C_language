#include<stdio.h>

int main(){
    int a =0;
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    do{
        printf("The fist natural number is %d\n",a+1);
        a++;
    }while(a<n);
    return 0;
}