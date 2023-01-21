#include<stdio.h>

int main(){
    int n;
    int arr[10];
    printf("Enter the value \n");
    scanf("%d",&n);
    for(int i=0;i<10; i++){
        
        arr[i]=(n*(i+1));
        // printf("%d\n",n*i);  
    }
    for(int i=0; i<10; i++){
        printf("%d\n",arr[i]);
    }
    
    return 0;
}