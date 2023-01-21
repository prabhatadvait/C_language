#include<stdio.h>
#include<string.h>

typedef struct complex{
    int real;
    int img;

}comp;

void display(comp co){
    printf("The value of real part is %d\n",co.real);
    printf("The value of imaginary part is %d\n",co.img);
}

int main(){
    comp cnums[5];
    for(int i=0; i<5; i++){
        printf("Enter the real value for %d num\n",i+1);
        scanf("%d",&cnums[i].real);

        printf("Enter the imaginary value for %d num\n",i+1);
        scanf("%d",&cnums[i].img);
    }
    for(int i=0; i<5; i++){
        display(cnums[i]);
    }
    return 0;
}