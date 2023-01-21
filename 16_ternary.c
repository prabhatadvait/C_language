#include<stdio.h>

int main(){
    
    int a;
    printf("Enter a\n");
    scanf("%d",&a);
    // one liner
    (a<5)? printf("a is less than 5\n") : printf("A is not less than 5");

    return 0;
}