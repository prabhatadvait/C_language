#include<stdio.h>
void wrongSwap(int a,int b);

void Swap(int *a,int *b);
int main(){
    int x=3,y=5;
    printf("The value of a and y is %d and %d\n",x,y);
    // printf("The sum of x and y is int\n",wrongSwap(x,y)); we can't write void function like this.
    wrongSwap(x,y);// this will not work due to call by value
    Swap(&x,&y);
    printf("The value of a and y after function call is %d and %d\n",x,y);
    
    
    return 0;
}
void wrongSwap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void Swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}