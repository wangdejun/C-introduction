#include <iostream>
#include <stdio.h>
#include <stack>
using namespace std;

template <class T> class arrStack : public stack <T>{
    private:
        int mSize;// the stack size
        int top;    // the top position
        T *st;  //store the stack elements array
    public:
        arrStack(int size){
            mSize = size;
            top = -1;
            st = new T[mSize];
        }
        arrStack(){
            //new a stack instance;
            top = -1;
        }
        ~arrStack(){
            delete [] st;
        }
        void clear(){
            top = -1; // clear the stack
        }
};

class Calculator {
    private:
        arrStack<double> s;
        bool GetTwoOperands(double& opd1, double& opd2);
        void Compute(char op);

    public:
        Calculator(void){};
        void Run(void);
        void Clear(void);
};