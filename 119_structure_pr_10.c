#include <stdio.h>
typedef struct timeStamp
{
    int date;
    int month;
    int year;
    int hour;
    int minute;
    int second;
} ts;
void display(ts T)
{
    printf("\nThe Timestamp is: %d-%d-%d-%d-%d-%d\n\n",T.date,T.month,T.year,T.hour,T.minute,T.second);
}
int main()
{
    ts samay = {17, 02, 2002, 12, 35, 47};
    display(samay);
    return 0;
}