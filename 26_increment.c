#include<stdio.h>
int main(){
    int a=5;
    printf("The value of a++ is %d\n",++a);

    // a++; // --->pehle print fir increment
    // ++a; // --->pehle increment phir print

    printf("The value of ++a is %d\n",a);

    // a+= 10; ---> This will increment a by 10
    a+=10;
    printf("The value of ++a is %d\n",a); 
    return 0;
}