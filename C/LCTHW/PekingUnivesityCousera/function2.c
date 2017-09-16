//Absolute function
#include <stdio.h>

//value type is declared in the parameter,and the function type
int Absolute(int n){
    if(n<0)
        return -n;
    else
        return n;
}

//输出字符串数组的第二个字符
//传入一个pointer?
char nextArrayChar(char *n){
    if(*(++n)){
        return *(n);
    }else{
        printf("You Array char lenght is not enough");
        return 0;
    }
}

int main()
{
    int a = -1233;
    printf("%d的绝对值是：%d\n",a ,Absolute(a));
    printf("--------------");
    

    char charArray[] = {'w','a','n','g'};
    printf("字符串中下一个字符是：%c\n",nextArrayChar(charArray));
    
    return 0;
}