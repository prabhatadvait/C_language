#include<stdio.h>
int sum(int a, int b); //function prototype
int main(){
    int result;
    int p;          //instead of p we can write d
    p = sum(4,6);
    printf("The sum of num  is %d\n",p);//function call
    return 0;
}
int sum(int a,int b){ //function definiton
    int d;
    d = a + b;
    return d;
}