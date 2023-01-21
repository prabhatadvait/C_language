#include<stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int a=n; a; a--){
        printf("%d\n",a);
    }
}