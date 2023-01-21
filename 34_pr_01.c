#include<stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int a=1;a<=10; a++){
        printf("%d\n",n*(a));
        
    }
    return 0;
}