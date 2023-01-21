#include<stdio.h>

void Swap(int *a);
int main(){
    int x=3;
    printf("The value of x is %d\n",x);
    
    Swap(&x);
    printf("The value of y after function call is %d\n",x);
    
    
    return 0;
}


void Swap(int *a){
    int temp;
    temp = *a;
    *a = (10*temp);
    
} 