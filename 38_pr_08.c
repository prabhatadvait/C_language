// #include<stdio.h>
// // This is by prabhat
// int main(){
//     int n,factorial=1;
//     printf("Enter the number n: ");
//     scanf("%d",&n);
//     for(int a=1;a<=n;a++){
//         factorial= (factorial * a);
//     }printf("Factorial of %d is %d\n",n,factorial);
//     return 0;
// }
// Now Harry turns---> Let's see
#include<stdio.h>
int main(){
    int i=0, n=7,factorial = 1;
    for(i=1;i<=n;i++){
        factorial *=i;
    }
    printf("The value of factorial %d is %d\n",n,factorial);
}
