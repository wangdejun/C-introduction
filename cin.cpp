#include <iostream>
using namespace std;

int main(){
	char b = 'w';
	int a = 1;
	long int c = 1234;
	long long int d = 123453311;
	double e = 1222;
	long double dd = 122222;
	float f = 3.12415926;
	cout<<"|--------------sizehaha11111----------------------"<<endl;
	cout<<"|  char size: "<<sizeof(b)<<endl;
	cout<<"|  int size: "<<sizeof(a)<<endl;
	cout<<"|  long int size: "<<sizeof(c)<<endl;
	cout<<"|  long long int size "<<sizeof(d)<<endl;
	cout<<"|  double size "<<sizeof(e)<<endl;
	cout<<"|  long double size "<<sizeof(dd)<<endl;
	cout<<"|  float size "<<sizeof(f)<<endl;
	cout<<"|-------------address in memory---------------"<<endl;
	int g=1243;
	int w=1052;
	int m=-13223;
	int result = g+w+m;
	std::cout<<g<<endl;
	std::cout<<w<<endl;
	cout<<m<<endl;
	cout<<"sum:"<<result<<endl;
	cout<<"---------initialization------------------------"<<endl;
	int h=3333;
	int i(3333);
	cout<<"h"<<h<<endl;
	cout<<"i"<<i<<endl;
	return 0;
}







