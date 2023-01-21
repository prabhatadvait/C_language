#include<stdio.h>
#include<string.h>
int main(){
    char p1[12];
    char p2[10];
    char c;
    int i=0;
    printf("Enter the value of first array\n");
    scanf("%s",p1);
    printf("Enter the value of second character by character \n");
    
    while(c!='\n'){
        // fflush(stdin); (not working)
        // scanf("%c",&c);(not working.)
        p2[i] = c;
        i++;
    }
    p2[i] = '\0';
    printf("The value of p1 is : %s\n",p1);
    printf("The value of p2 is : %s\n",p2);
    return 0;
}