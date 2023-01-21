#include<stdio.h>
void sumAndAvg(int a,int b,int *sum,float *avg){
    *sum = a +b;
    *avg = *sum/2;
}

int main(){
    int i,j,gum;  //Here we can also use same like gum--> sum    subji--> avg
    float subji;
    i=4;
    j=9;
    sumAndAvg(i,j,&gum,&subji);
    printf("The value of sum is %d\n",gum);
    printf("The value of avg is %f\n",subji);
    return 0;
}