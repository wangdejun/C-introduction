#include <iostream>
using namespace std;

int main()
{
    int n,a[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //bubble
    for(int i=0;i<10-1;i++){
        for(int j=1;j<10-i;j++){
            //左边是偶数，右边是奇数，则交换;左边是大数，右边是小数，则交换：
            bool leftIsEven=a[j-1]%2==0;
            bool rightIsEven = a[j]%2==0;
            if((leftIsEven&&!rightIsEven)||((a[j-1]%2==a[j]%2)&&a[j-1]>a[j])){
                int temp = a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    //output
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
