#include<stdio.h>
#include<math.h>

int main(){
    int a = 5;
    int b = 4;
    int z;
    z = a * b;
    // a * b = z; This will throw an error.
    printf("The value of z is %d\n",z);
    printf("The value of  a + b is %d\n",a + b);
    printf("The value of  a - b is %d\n",a - b);
    printf("The value of  a * b is %d\n",a * b);
    printf("The value of  a / b is %d\n",a / b);
    
    // printf("The value of 4 * 5 is %d\n",(4)(5));---> will not return 20 that means wrong.
    printf("The value of a * b is %d\n",4*5);

    // There is no operator to perform exponentiation in C
    printf("The value of 4 ^ 5 is %d\n", 4^5);// it will not return 4 to power 5
    printf("The value of 4 ^ 5 is %f\n",pow(2,5));

    printf("The value of 6+5 is %d\n", 6+5);
    printf("The value of 6 + 5.2 is %f\n", 6+5.2);
    printf("The value of 6.2 + 5.2 is %f\n",6.2 + 5.2);
    printf("The value of 5/2 is %d\n",5/2);
    printf("The value of 5.0/2 is %f\n", 5.0/2);

    // Quick quiz
    int k = 3.0/9;
    printf("The value of k is %d\n",k);
    printf("The value of 3.0/9 is %f\n",3.0/9);
    return 0;
}