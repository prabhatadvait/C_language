#include<stdio.h>


int area(int side);

int main(){
    int side,d;
    printf("Enter the side \n");
    scanf("%d",&side);
    // printf("The area of square is %f\n",pow(side,2));    
    d = area(side);
    printf("The area of square is %d\n",d);
    return 0;
}
int area(int side){
    int d;
    d = (side * side);
    return d; 
}