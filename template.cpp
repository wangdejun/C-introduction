#include <iostream>
using namespace std;

template<class T>
void print_arr(const T array[],int size){
    int i;
    for(i=0;i<size;i++){
        cout<<array[i]<<endl;
    }    
}

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    print_arr(a,10);
    return 0;
}
