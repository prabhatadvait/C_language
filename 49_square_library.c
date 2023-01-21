#include<stdio.h>
#include<math.h>

int main(){
    float side;
    float a = 2.0;
    printf("Enter the value of side\n");
    scanf("%f", &side);
    printf("Area of square is %lf", pow(side,a));
    
    return 0;
}
// This is correct but not working just because of some compiler
