#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter the a\n");
    scanf("%d",&a);
    printf("Enter the b\n");
    scanf("%d",&b);
    printf("Enter the c\n");
    scanf("%d",&c);
    printf("Enter the d\n");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("a is greatest\n");
    }
    if(b>a && b>c && b>d){
        printf("b is greatest\n");
    }
    if(c>a && c>b && c>d){
        printf("c is greatest\n");
    }
    if(d>a && d>b && d>c){
        printf("d is greatest\n");
    }
    return 0;
}
