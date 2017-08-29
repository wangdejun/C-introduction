#include <iostream>
using namespace std;

int ToSum(int val);

int main(){
    int sum = 0;
    int val =1;
    cout<<"The number is :"<<endl;
    cin>>val;
    cout<<"The sum is "<<ToSum(val)<<endl;
    return 0;
}


int ToSum(int val){
    int i=1;
    int sum = 0;

    while (i<=val){
        sum+=i;
        ++i;
    }

    return sum;
    
}