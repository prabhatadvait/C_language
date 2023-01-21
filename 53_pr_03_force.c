#include<stdio.h>

float force(int mass);

int main(){
    int mass;
    printf("Enter the mass of body: ");
    scanf("%d",&mass);
    printf("Force exerted on a body by earth is %.3f\n",force(mass));
    return 0;
}
float force(int mass){
    float d = mass * 9.8;
    return d;
}