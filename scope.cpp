#include <iostream>
using namespace std;


int reused = 42;

int main(){
    int unique = 0;
    cout<<"reused: "<<reused<<"unique:"<<unique<<endl;

    int reused = 0;
    cout<<"reused"<<reused<<"unique:"<<unique<<endl;

    cout<<"::reused: "<<::reused<<endl;
    cout<<"reused: "<<reused<<endl;

    return 0;
}