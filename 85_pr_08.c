#include <stdio.h>

void printTable(int (*arr)[10], int num) {
    printf("Here the value of %d\n", num);
    for (int i = 0; i < 10; i++) {
        arr[0][i] = num * (i + 1);
        printf("The multiplication table is %d\n", arr[0][i]);
    }
}

int main(void) {
    // int a , b;
    printf("hey prabhat enter the value of a and b:");
    // scanf("%d%d",&a,&b);
    int arr[10][10];
    printTable(arr, 2);
    printTable(arr + 1, 7);
    printTable(arr + 2, 9);
    return 0;
}
