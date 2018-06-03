#include <iostream>
using namespace std;

int main()
{
    int a[10];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    //将数组分成左右两部分，左边是奇数，右边是偶数；
    int l=0,r=9;//parameters;
    while(l<=r){
        bool leftIsOdd = a[l]%2==1;
        bool rightIsEven = a[r]%2==0;
        if(leftIsOdd){
            l++;
        }else if(rightIsEven){
            r--;
        }else if(!leftIsOdd&&!rightIsEven){
            int temp = a[l];
            a[l]=a[r];
            a[r]=temp;
        }
    }
    //test:
    cout<<endl<<"test"<<endl;
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    //对左边进行处理：
    int start = 0, end=l;
    for(int i= start;i<end+start-1;i++){
        for(int j= start+1;j<start + end -i;j++){
            if(a[j-1]>a[j]){
                int temp = a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    //对右边进行处理：
    start = l, end=10;
    for(int i= start;i<end+start-1;i++){
        for(int j= start+1;j<start + end -i;j++){
            if(a[j-1]>a[j]){
                int temp = a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    //output
    cout<<"output:"<<endl;
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}