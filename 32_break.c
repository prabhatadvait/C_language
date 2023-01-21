#include<stdio.h>

int main(){
    int a = 0;
    do{
        printf("The value is %d\n",a);
        if(a==4){
            break;
        }
        a++;
    }while(a<10);
    
    return 0;
}