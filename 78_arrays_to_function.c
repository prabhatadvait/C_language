#include<stdio.h>

// void printArray(int *ptr, int n){
//     for(int i=0;i<n;i++){
//         printf("The value of element %d  is %d\n",i+1, *(ptr+i));
        
//         //WE can also write like this.
//         // printf("The value of element %d  is %d\n",i+1, *(ptr));
//         // ptr++;
//     }
//     //we can also change main value from here
//     *(ptr+2)=5555;
// }
// We can also write like this
void printArray(int ptr[], int n){
    for(int i=0;i<n;i++){
        printf("The value of element %d  is %d\n",i+1, (ptr[i]));
    }
    //we can also chage main function array value
    ptr[2]=5343;
}  


int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    printArray(arr,9);

    printf("%d\n",arr[2]);// THis is to check the value --changed or not

    return 0;
}