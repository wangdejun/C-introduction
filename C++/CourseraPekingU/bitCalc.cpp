#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n1 = 16;
    short n2 = 10;
    unsigned short n3 = 10;
    char c = 15;
    n1 = n1>>2;
    n2 = n2>>2;
    n3 = n3>>2;
    c = c>>2;
    printf("n1:%d\nn2:%d\nn3:%d\nn4:%d\n", n1, n2, n3, c);
}