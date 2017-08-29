#include <iostream>
#include <string>
using namespace std;

int main(){
    string line;

    while(getline(cin,line)){
        if(!line.empty()){
            cout<<"Line size of "<<line<<" is: "<<line.size()<<endl;
        }else{
            cout<<"Sorry,your input is empty, please check your own word"<<endl;
        }
    }

    return 0;
}