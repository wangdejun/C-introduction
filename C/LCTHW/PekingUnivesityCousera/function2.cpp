#include <iostream>
#include <string.h>


using namespace std;

int Absolute(int n){
    if(n>0)
        return n;
    else
        return -n;
}

int nextArrayChar(char *n)
{
    if(*(n++)){
        return *n;
    }else{
        printf("Error, Wrong ArrayLength");
        return -1;
    }
}


int main()
{
    int a = -100;
    cout<<Absolute(a)<<endl;
    
    char name[] = {'w','a','n'};
    cout<<nextArrayChar(name)<<endl;
    return 0;
}