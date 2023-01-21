#include<stdio.h>

void display(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("Enter the value of marks\n");
        scanf("%d",&arr[i]);
    }
}

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int marks[n];
    int *arr = &marks[0];
    display(marks,n);
    for(int j = 0;j<n;j++){
        printf("The value of array are:%d\n",marks[j]);
    }

    return 0;
}
