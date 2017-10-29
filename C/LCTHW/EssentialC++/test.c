#include <stdio.h>

int main(){
    int m = 12;
    int array[] = {1,1,2,3,4};
    int length = sizeof(array)/sizeof(int);

    printf("%d, %d", m, length);
    return 0;
}