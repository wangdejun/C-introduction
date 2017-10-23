#include <vector>
#include <iostream>
using namespace std;

int main(){
    const int seq_size = 18;
    
    vector<int> pell_seq(seq_size);
    pell_seq[0]=0;
    pell_seq[1]=1;

    for(int ix = 2;ix<seq_size;++ix)
    {
        pell_seq[ix] = pell_seq[ix-2]+pell_seq[ix-1];
        cout<<pell_seq[ix]<<endl;
    }
    return 0;
}

