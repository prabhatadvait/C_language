#include<stdio.h>
int sum(int n);
int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("The sum of first %d natural number is %d\n",x,sum(x));    
    return 0;
}
int  sum(int n){
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    else{
        
        return n + sum(n-1);
        
    }
    
}