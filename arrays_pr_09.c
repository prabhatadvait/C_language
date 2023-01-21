#include<stdio.h>

int main(){
    int a,n;
    printf("Enter the number: \n");
    scanf("%d",&a);
    int arr[a];
    int count;
    count = 0;
    for(int j=0; j<a; j++){
       
        printf("Now enter the array value boy: ");
        scanf("%d",&arr[j]);
         
        
        
    }
    for(int j = 0;j<a; j++){
        printf("The value of %d\n",arr[j]);
    }
    
    return 0;
}