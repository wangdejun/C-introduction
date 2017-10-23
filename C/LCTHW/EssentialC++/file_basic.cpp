#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ofstream outfile("seq_data3.txt",ios_base::app);
    if(!outfile){
        cout<<"OOps! Unable to save session data\n"<<endl;
    }else{
        outfile<<"wangdejun"<<" "
                <<"28years old"<<" "<<endl;
    }
    return 0;
}