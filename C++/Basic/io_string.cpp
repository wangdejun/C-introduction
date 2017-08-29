#include <iostream>
#include <string>
#define MYNAME "wangdejun"
using namespace std;

int main(){
	string mystr;
	while(1){
		cout<<"what is your name ? "<<"\n";
		getline(cin,mystr);
		cout<<"Hello"<<mystr<<" ! \n";
		cout<<"Your looks nice ! ";
		cout<<"Let's do some interviews about your new life in America ! \n";
		cout<<"I now fire the questions!\n";
		cout<<"OK, the first question about your sports";
		cout<<"what is your favorate NBA team ? "<<"\n";
		getline(cin,mystr);
		if(mystr=="California Warriors"){
			cout<<"I like "<<mystr<<" too \n"<<endl;
		}else{
			cout<<"Fuck you , you go to hell! \n"<<endl;
			cout<<"you dare not like California Warriors?"<<endl;
		}
	}
	return 0;
}
