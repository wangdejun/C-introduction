#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
	string myDialog("wangdejun shi yi ge da huai dan");
	for(char a : myDialog){
		cout<<" |"<<a<<"| ";
	}
	return 0;
}
