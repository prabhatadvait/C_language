#include<stdio.h>
int num;
void reverse(int *arr,int num){
    int temp;
    for(int i = 0;i<(num/2); i++){
        temp = arr[i];
        arr[i] = arr[num-i-1];
        arr[num-i-1] = temp;
    }
}
int main(){
    int arr[]= {2,4,6,8,10};
    reverse(arr,5);
    for (int i = 0; i < 5; i++)
    {
        printf("The value of new arr is %d\n",arr[i]);
    }
    
        
    return 0;
}