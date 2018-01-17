#include <stdio.h>
#include <iostream>
using namespace std;

//Define the Base Class
class Base{
    public:
        int n;
        Base(int i):n(i)
        {
            cout<<"Base"<<n<<"constructed"<<endl;
        }
        //析构函数
        ~Base()
        {
            cout<<"Base"<<n<<"destructed"<<endl;
        }
};

//Derived Class
class Derived:public Base{
    public:
        Derived(int i):Base(i)
        {
            cout<<"Derived constructed"<<endl;
        }
        //析构函数
        ~Derived()
        {
            cout<<"Derived destructed"<<endl;
        }
};

int main(){
    Derived Obj(3);
    return 0;
}

/*
result:
----------------
Base3constructed
Derived constructed
Derived destructed
Base3destructed
*/