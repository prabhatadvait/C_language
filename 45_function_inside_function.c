#include<stdio.h>
void display1();
void display2();
void display3();
int main(){
    display1();

    return 0;
}
void display1(){
    printf("Good Morning! \n");
    display2();
}
void display2(){
    printf("Good Afternoon! \n");
    display3();
}
void display3(){
    printf("Good Night! \n");
}