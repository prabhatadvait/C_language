#include <stdio.h>
#include <string.h>

typedef struct bank
{
    long accountNo;
    float interest;
    char name[33];
} bk;
bk details(bk PNB)
{
    printf("\nThe account number of customer is %ld\n", PNB.accountNo);
    printf("The Interest rate of the customer is %f\n", PNB.interest);
    printf("The Name of account holder is %s\n\n", PNB.name);
}
int main()
{
    bk PNB;
    PNB.accountNo = 35766650346;
    PNB.interest = 5.6;
    strcpy(PNB.name, "Prabhat");
    details(PNB);
    return 0;
}