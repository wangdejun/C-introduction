#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
	string mystr("122333221");
	int mynum;
	stringstream(mystr)>>mynum;
	cout<<mynum*3<<endl;
	return 0;
}
