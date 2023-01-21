#include<stdio.h>
int average(int a,int b,int c);

int main(){
    int a,b,c,d;
    printf("Enter the number: \n");
    scanf("%d%d%d",&a,&b,&c);
    // d = average(a,b,c); //we can also write like this
    printf("The average of %d and %d and %d is %d\n",a,b,c,average(a,b,c));
    
    return 0;
}
int average(int a,int b,int c){
    int d = (a + b + c)/3;
    return d;    
}