#include<stdio.h>
#include<string.h>

typedef struct vector{
    int x;
    int y;
}vec;

int main(){
    vec v1,v2;
    v1.x= 45;
    v1.y= 34;
    printf("X  is %d\n",v1.x);
    printf("Y is %d\n",v1.y);

    v2.x=98;
    v2.y=67;
    printf("X is %d\n",v2.x);
    printf("Y is %d\n",v2.y);
}