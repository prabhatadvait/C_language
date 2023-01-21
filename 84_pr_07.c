#include <stdio.h>

printTable(int *arr,int num){
    printf("Here is the the value  of %d\n",num);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = num*(i+1);
        printf("The multiplication table is  %d\n",arr[i]);
    }
    
}

int main(void) {
    int arr[3][10];

    printTable(arr[0],2);
    printTable(arr[1],7);
    printTable(arr[2],9);
  return 0;
}


