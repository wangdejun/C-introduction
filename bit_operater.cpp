#include <iostream>
using namespace std;

int main(){
    unsigned char a = 0145;
    unsigned char b = 0257;
    unsigned char c = 'q';

    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;
    cout<<('q'<<6)<<endl;
    return 0;
}