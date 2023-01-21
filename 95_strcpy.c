#include<stdio.h>
#include<string.h>

int main(){
    char *source = "hello";
    char target[45] = "lalala";
    strcpy(target,source);
    printf("Now the target is %s\n",target);
    // We can't do like this.
    // strcpy(source,target);
    // printf("Now the source is  %s\n",source);
    return 0;
}