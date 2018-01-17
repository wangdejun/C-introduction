#include <stdio.h>
#include <iostream>
using namespace std;

//public 类的继承兼容赋值规则
//Base Class 基类
class Base{
    public:
        int n;
        Base(int i):n(i){
            cout<<"Base"<<n<<"constructed"<<endl;
        }
        ~Base(){
            cout<<"Base"<<n<<"destructed"<<endl;
        }
};
//Derived Class 儿子类
class Derived: public Base
{
    public:
        Derived(int i):Base(i){
            cout<<"Derived constructed"<<endl;
        }
        ~Derived(){
            cout<<"Derived destructed"<<endl;
        }
};
//MoreDerived Class 孙子类
class MoreDerived: public Derived{
    public:
        MoreDerived():Derived(4){
            cout<<"More Derived constructed"<<endl;
        }
        ~MoreDerived(){
            cout<<"More Derived destructed"<<endl;
        }
};
//Run the main function
int main(){
    MoreDerived Obj;
    return 0;
}