#include <stdio.h>
#include <iostream>

// class's friend function can access the private member in the class
class CCar;
class CDriver{
    public:
        void ModifyCar(CCar * pCar);
};

class CCar{
    private:
        int price;
    friend int MostExpensiveCar(CCar cars[], int total); //defination friend
    friend void CDriver::ModifyCar(CCar * pCar); //defination friend
};

void CDriver::ModifyCar(CCar *pCar){
    pCar->price += 1000;//汽车改装后价值增加；
}
int MostExpensiveCar(CCar cars[], int total){//求最贵汽车的价格；
    int tmpMax = -1;
    for(int i=0;i<total;i++)
        if(cars[i].price > tmpMax)
            tmpMax = cars[i].price;
    return tmpMax;
}

int main(){
    return 0;
}