#include<stdio.h>

typedef struct calender{
    int date;
    int month;
    int year;

}cal;
void display(cal pka){
    printf("The date is %d/%d/%d\n",pka.date,pka.month,pka.year);
}

int main(){
    cal c = {02,02,2023};
    cal d = {04,06,2025};
    display(c);
    display(d);
    
    
    
    return 0;
}