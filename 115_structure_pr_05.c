#include<stdio.h>
#include<string.h>

typedef struct complex{
    float real;
    float img;
}cop;
cop comp(cop m1,cop m2){
    cop result;
    result.real = m1.real + m2.real;
    result.img = m1.img + m2.img;
    return result;
}

int main(){
    cop v1,v2,sum;
    v1.real = 4.3;
    v2.real = 5.3;
    
    v1.img = 5.7;
    v2.img = 6.7;
    sum = comp(v1,v2);
    printf("The complex of realsum is %fn number img sum is %f\n",sum.real,sum.img);
    return 0;
}