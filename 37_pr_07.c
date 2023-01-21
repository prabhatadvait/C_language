#include<stdio.h>

int main(){
    int m=8;
    
    int n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        sum=sum+i*m;// sum of table of 8 by Prabhat
    }printf("%d\n",sum);
    return 0;
}
