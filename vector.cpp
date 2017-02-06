#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(){
    vector<string> str_arr;
    string str;
    while(cin>>str)
    {
        if(!str.empty()){
            cout<<"1----";
            str_arr.push_back(str);
        }else{
            break;
        }
    }
    cout<<"2-----";
    for(int val=0;val<str_arr.size();++val)
    {
        cout<<str_arr[val]<<endl;
    }

    return 0;
}