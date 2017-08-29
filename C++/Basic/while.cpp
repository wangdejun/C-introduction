#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int val = 1;

    while(val<=10){
        sum+=val;
        ++val;
    }

    cout<<"SUM:"<<sum<<endl;
    return 0;
}