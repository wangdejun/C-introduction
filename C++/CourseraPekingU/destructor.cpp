#include <stdio.h>
#include <iostream>
using namespace std;

class Ctest{
    public:
        //destructor will be called if the program was ended;
        ~Ctest(){
            cout<<"destrcutor called"<<endl;
        }
};

int main(){
    //we new 2instances ,when the main program was ended;
    //the destructor will be call 2 times;
    Ctest array[2];
    cout<<"End Main"<<endl;    
    return 0;

}