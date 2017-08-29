#include <iostream>
#include <string>
using namespace std;

class Rectangle{
    public:
        int w,h;
        int Area(){
            return w*h;
        }
        int Perimeter(){
            return 2*(w+h);
        }
        void Init(int w_,int h_){
            w=w_;
            h=h_;
        }
};

int main(){
    Rectangle r1;
    Rectangle *p1=&r1;

    int w=0,h=0;
    cout<<"Please input the width: "<<endl;
    w=199;
    cout<<"Please input the height: "<<endl;
    h=199;

    p1->Init(w,h);

    // r.Init(w,h);
    cout<<"RectangleArea: "<<p1->Area()<<endl;
    cout<<"RectanglePerimeter: "<<p1->Perimeter()<<endl;

    return 0;
}

