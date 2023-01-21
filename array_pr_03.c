#include<stdio.h>

int main(){
    int n;
    int arr[10];
    scanf("%d",&n);
    for(int i=1; i<=10; i++){
        arr[i]= n*i;
    }
    for(int i=1; i<=10; i++){
        printf("the table is %d\n",arr[i]);
    }

    return 0;
}