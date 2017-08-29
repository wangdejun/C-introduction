#include <iostream>
using namespace std;

int main(){
	int num=1;
	int i=0;
	cin>>num;

	if(num%2==0){
		num=num/2;
		i++;
	}else if(num%2!=0){
		num=(3*num+1)/2;
		i++;
	}
	cout<<i<<endl;
	return 0;
}
