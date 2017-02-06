#include <iostream>
#include <array>
using namespace std;

int main(){
int arr1[] = {1,2,3,4,5,6};
int *b = begin(arr1);
int *e = end(arr1);

cout<<"-------info of a & b:--------"<<endl;
cout<<"b"<<b<<endl;
cout<<"*b: "<<*b<<endl;
cout<<"e"<<e<<endl;
cout<<"*e: "<<*e<<endl;
cout<<"--------end of info ---------"<<endl;

return 0;
}