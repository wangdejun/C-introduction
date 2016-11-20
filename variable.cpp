#include <iostream>
using namespace std;

int main(){
	long long int a;
	auto b = a;
	cout<<"-------------"<<endl;
	cout<<sizeof(b)<<endl;
	cout<<"-------------"<<endl;
	long double c = 12.3343123;
	decltype(c) d;
	cout<<"size of d is:"<<sizeof(d)<<endl;
}
