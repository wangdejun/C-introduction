#include <stdio.h>
void printMin(int a, int b){
    if(a<b)
        printf("%d", a);
    else
        printf("%d", b);
}

int main(){
    void (* pf)(int, int);
    int x = 4, y=5;
    pf = printMin;
    pf(x, y);
    return 0;
}