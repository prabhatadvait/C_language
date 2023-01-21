#include<stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int a=10;a;a--){
        //printf("%d\n",n*(a)); // Direct comment karna;
        printf("%d X %d = %d\n",a,n,n*(a));
        
    }
    return 0;
}