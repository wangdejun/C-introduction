#include <iostream>

int main(){
    int sum=0;
    int value = 0;
/*
 * 精巧的判断，遇到非数字输入或者是文件结束符时，条件为假
 */
    while(std::cin>>value){
        sum += value;
    }

    std::cout<<"Sum is "<<sum<<std::endl;
    return 0;
}