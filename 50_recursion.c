#include<stdio.h>
int factorial(int x);
int main(){
    int a;
    printf("Enter the number that you want the factorial\n");
    scanf("%d",&a);
    printf("The value of factorial %d is %d",a,factorial(a));
    return 0;
}
int factorial(int x){
    
    if(x==0 || x==1){
        return 1;
    }
    else{
        // printf("calling the factorial(%d)",x); we can check how recursion func work.
        return x * factorial(x-1);
    }
}