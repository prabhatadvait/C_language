#include<stdio.h>
int tempa(int F);

int main(){
    int F;
    printf("Enter the temperature in Fahreinheit: \n");
    scanf("%d",&F);
    printf("The value of temperature in celsius is %d\n",tempa(F));
    return 0;
}
int tempa(int F){
    int C = (((F-32)*5)/9);
    return C;
}