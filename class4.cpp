#include <iostream>
using namespace std;

class Complex{
    int real, image;
    public:
        Complex *ReturnAddress(){
            return this;
        }
        float ReturnReal(){
            return this->real;
        }
        void Init(int _real,int _image){
            real = _real;
            image = _image;
        }
        int ReturnSize(){
            return sizeof(this);
        }
};

int main(){
    Complex c,c1;
    c.Init(2,3);
    c1.Init(2,33);
    cout<<"Complex1 "<<endl;
    cout<<c.ReturnAddress()<<endl;

    cout<<"Complex2 "<<endl;
    cout<<c1.ReturnAddress()<<endl;    

    cout<<"ComplexSize "<<endl;
    cout<<c.ReturnSize()<<endl;

    return 0;
}