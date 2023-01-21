#include<stdio.h>
// Sum of first n natural number using For loop 

// int main(){
//     int n,sum=0;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i = 1; i<=n; i++){
//         sum=sum+i;
//     }printf("%d\n",sum);
//     return 0;
// }

// Sum of first n natural number using While loop

// int main(){
//     int n,sum=0,i=1;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     while(i<=n){
//         sum=sum+i;
//         i++;
//     }printf("sum of first n natural number is  %d\n",sum);
// }

// Sum of first n natural number using Do while loop

int main(){
    int n,sum=0,i=1;
    printf("Enter the number :");
    scanf("%d",&n);
    do{
        sum = sum+i;
        i++;
    }while(i<=n);
    printf("sum of first n natural number is %d\n",sum);
    
    return 0;
}
