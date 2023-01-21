#include<stdio.h>
#include<string.h>

typedef struct prabhat{
    int x;
    int y;
}pk;

pk sumVector(pk advait,pk sharma){
    pk result;
    result.x = advait.x + sharma.x;
    result.y = advait.y + sharma.y;
    return result;
}

int main(){
    pk v1,v2,sum;
    v1.x = 83;
    v1.y = 38;
    
    v2.x = 73;
    v2.y = 43;

    sum = sumVector(v1,v2);
    printf("X dim of result is %d  and  %d\n",sum.x,sum.y);
    
    return 0;
}