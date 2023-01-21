#include <stdio.h>


int ginti_positives(int *array, int size);

int main(void) {
  int a;
  scanf("%d",&a);  
  int array[a]; //= {1, -2, 3, 4, -5, 6};
  // int  a;
  for(int p=0;p<a-1;p++){
    scanf("%d\n",&array[p]);
  }
  int count;

  count = ginti_positives(array, a);
  printf("Number of positive integers: %d\n", count);

  return 0;
}


int ginti_positives(int *array, int a) {
  int count = 0;
  int i;
  for (i = 0; i < a; i++) {
    if (array[i] > 0) {
      count++;
    }
  }
  return count;
}
