#include <iostream>
using namespace std;

class Rectangle{
    private:
        int w,h;
    public:
        int Area();
        int Perimeter();
        void Init(int _w,int _h);
};

int Rectangle::Area(){
    return w*h;
}
int Rectangle::Perimeter(){
    return (w+h)*2;
}
void Rectangle::Init(int _w, int _h){
    w=_w;
    h=_h;
}

int main(){
    int w,h;
    cin>>w>>h;
    Rectangle r;
    r.Init(w,h);
    cout<<"r Area: "<<r.Area()<<endl;
    cout<<"r Perimeter: "<<r.Perimeter()<<endl;
    return 0;
}