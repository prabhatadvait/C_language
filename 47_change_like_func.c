#include<stdio.h>

void change(int);

int main(){
    int b = 344;
    printf("The value of b before change is %d\n",b);
    change(b);
    printf("The value of b after change fuction is %d\n",b);
    
    return 0;
}

void change(int a){
    a = 77;
}