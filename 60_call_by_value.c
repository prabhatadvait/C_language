#include<stdio.h>

int sum(int a,int b);

int main(){
    int x=4,y=8;
    printf("The value of x and y is %d and %d\n",x,y);
    printf("The sum of x and y is %d\n",sum(x,y));
    printf("The value of x and y after function call is %d and %d\n",x,y);
    
    return 0;
}
int sum(int a,int b){
    int c;
    c = a + b;
    b = 7575;
    a = 5858;
    return c;
}