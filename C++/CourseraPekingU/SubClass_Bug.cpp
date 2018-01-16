#include <stdio.h>
#include <iostream>
using namespace std;

class Bug{
    private:
        int nLegs;
        int nColor;
    public:
        int nType;
        Bug(int legs, int color);
        void PrintBug(){};
};

class FlyBug: public Bug{
    int nWings;
    public:
        FlyBug(int legs, int color, int wings);
};

