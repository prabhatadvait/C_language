#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    // size of operator in c

    // printf("The size of int on prabhat pc is %d\n",sizeof(int));
    // printf("The size of float on prabhat pc is %d\n",sizeof(float));
    // printf("The size of char on prabhat pc is %d\n",sizeof(char));
    // printf("The size of long on prabhat pc is %d\n",sizeof(long));
    // printf("The size of long double on prabhat pc is %d\n",sizeof(long double));
    
    // ptr = malloc(6 * sizeof(int)) --we cannot write like because malloc return void.
    ptr = (int *)malloc(6 * sizeof(int));// we make it int by using (int *)
    for(int i=0;i<6;i++){
        printf("Enter the value of %d element: \n",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0; i<6; i++){
        printf("The value of %d element is: %d\n",i+1,ptr[i]);
    }


    return 0;
}