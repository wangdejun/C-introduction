#include <stdio.h>
#include <iostream>
using namespace std;

class A{
    int i;
public:
    void Hello(){
        cout<<"Hello"<<endl;
    }
};

int main(){
    A *p = NULL;
    p->Hello();
}