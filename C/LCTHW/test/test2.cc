#include <iostream>

using namespace std;

int main(){
    //以ox开头的是16进制数字
    int a = 0x7FFFFF85;
    cout << dec << a <<endl;
    cout << oct << a <<endl;

    int b = 077;
    cout << dec << b <<endl;
    cout << hex << b <<endl;

    signed int c =  0x7FFFFFFF;
    c++;
    cout << dec << c <<endl;
    return 0;
}