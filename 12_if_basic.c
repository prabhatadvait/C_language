#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the number \n");
    scanf("%d",&a);

    if(a%2==0){
        printf("%d is an even number\n",a);

    }
    else{
        printf("%d is an odd number \n",a);
    }
    
    return 0;
}

