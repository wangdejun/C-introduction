#include <iostream>

using namespace std;

int main()
{
    int a = -123;
    cout << hex << a <<endl;
    cout << oct << a <<endl;
    cout << sizeof(int)<<endl;
    cout << sizeof(long)<<endl;
    cout << sizeof(double)<<endl;    
    cout << sizeof(float)<<endl;    
    return 0;
}