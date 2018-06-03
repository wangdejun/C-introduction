#include <iostream>
using namespace std;
int main()
{
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //bubble;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n-i;j++){
            if(a[j-1]>a[j]){
                int temp = a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    //output:
    cout<<"Sorted Output"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}