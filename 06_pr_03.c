#include<stdio.h>

int main(){
    float celsius, far;
   // far = (celsius * 9 / 5 ) + 32;// we can write only after the scanf
    printf("Enter the temperature in celsius: ");
    scanf("%f",&celsius);
    far = (celsius * 9 / 5 ) + 32;
    printf("The value of temperature in fahrenheit: %f",far);

    return 0;
}