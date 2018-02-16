#include <iostream>
using namespace std;

template <class Type> int BinSearch(vector<Item<Type>*>& dataList,int length, Type k){
    int low = 1, high = length, mid;
    while(low<high){
        mid = (low+high)/2;
        if(k<dataList[mid]->getKey())
            high = mid-1;
        else if(k>dataList[mid]->getKey())
            low=mid+1;
        else
            return mid;
    }
    return 0;
}



int main(){
    BinSearch()
}