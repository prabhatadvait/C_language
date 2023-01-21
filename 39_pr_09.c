#include<stdio.h>
int main(){
    int n,i=1,factorial = 1;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(i<=n){
        factorial *= i;
        i++;
    }printf("factorial of %d is %d\n",n,factorial);
    return 0;
}
