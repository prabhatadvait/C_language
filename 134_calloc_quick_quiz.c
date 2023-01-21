#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("Enter the n ,that the memory you want to allocated\n");
    scanf("%d",&n);
    ptr = (int *)calloc(n, sizeof(int));// we make it int by using (int *)
    for(int i=0;i<n;i++){
        printf("Enter the value of %d element: \n",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0; i<n; i++){
        printf("The value of %d element is: %d\n",i+1,ptr[i]);
    }
    // calloc intialize every memory default as 0;

    return 0;
}
