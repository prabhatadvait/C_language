#include<stdio.h>
// This is not a best method to solve this problem
// To check a prime number.
int main(){
    int n, prime = 1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i = 2;i<n; i++){
        if(n%i==0){
            prime = 0;
            break;
        }
    }
    if(prime==0){
        printf("This is not a prime number ");
    }
    else{
        printf("Yes, this is prime number ");
    }
    return 0;
}