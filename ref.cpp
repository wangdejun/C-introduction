#include <iostream>
using namespace std;

int main(){
    double ival = 42;
    double &refer = ival;
    // int &refer2;
    cout<<"ival: "<<ival<<endl;
    cout<<"&ival: "<<&ival<<endl;
    cout<<"&refer: "<<&refer<<endl;

    return 0;
}