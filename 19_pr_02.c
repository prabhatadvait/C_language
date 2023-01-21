#include<stdio.h>

int main(){
    int maths,physics,chemistry;
    float total;
    printf("Enter the Physics number\n");
    scanf("%d",&physics);
    printf("Enter the Maths number\n");
    scanf("%d",&maths);
    printf("Enter the chemistry number\n");
    scanf("%d",&chemistry);
    total = (maths + physics + chemistry)/3;
    if((total<45) || physics<33 || maths<33 || chemistry<33){
        printf("Your total percentage is %f and you are fail\n",total);
    }
    else{
        printf("Your total percentage is %f and you are pass\n",total);
    }
    return 0;
}