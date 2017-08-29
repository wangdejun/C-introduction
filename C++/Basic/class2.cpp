#include <iostream>
using namespace std;

class Rectangle{
    public:
        int w,h;
        int Area(){
            return w*h;
        }
        int Perimeter(){
            return (w+h)*2;
        }
        void Init(int w_, int h_){
            w = w_;
            h = h_;
        }
};

int main(){
    int w,h;
    cin>>w>>h;
    Rectangle r1;
    //rr是r1的引用，相当于一个别名
    Rectangle &rr = r1;
    rr.Init(w,h);

    cout<<"rr Area: "<<rr.Area()<<endl;
    cout<<"rr Perimeter: "<<rr.Perimeter()<<endl;

    cout<<"r1 Area: "<<r1.Area()<<endl;
    cout<<"r1 Perimeter: "<<r1.Perimeter()<<endl;

    return 0;
}