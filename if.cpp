//统计连续出现的次数
#include <iostream>
using namespace std;

int main(){
    int val=0, currVal = 0;

    if(cin>>currVal){
        int cnt = 1;

        while(cin>>val){
            if(val==currVal){
                ++cnt;
            }else{
                cout<<currVal<<" occurs "<<cnt<<" times "<<endl;
                currVal = val;                
                cnt = 1;
            }
        }
        cout<<currVal<<" occurs "<<cnt<<" times "<<endl;
    }

    return 0;
}