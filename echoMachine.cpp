#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	do{
		cout<<"Please input your name:"<<endl;
		getline(cin,str);
		cout<<"Your name is: "<<str<<endl;
	}while(str!="wangdejun");
	cout<<"Finally, you got the right good name! "<<endl;
	return 0;
}
