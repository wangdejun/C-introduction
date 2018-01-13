#include <stdio.h>

void printMin(int a, int b){
    if(a<b)
        printf("%d\n", a);
    else
        printf("%d\n", b);
}

int ThreeMax(int a, int b, int c){
    int max=a;
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    return max;
}

int main(){
    //定义一个函数指针；类型名(* 指针变量名)(参数类型1, 参数类型2,...)
    void (* pf)(int, int);
    //定义两个变量。
    int x = 4, y=5;
    //将函数赋值给函数指针。
    pf = printMin;
    pf(x, y);

    //定义一个函数指针：
    int (* threeMax)(int, int, int);
    threeMax = ThreeMax;
    int num1 = 999, num2=9000, num3 = 990000;
    printf("Max: %d", threeMax(num1, num2, num3));
    return 0;
}