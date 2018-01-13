#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

//class's member and its scope that canbe accessed;

class CEmployee{
    private:
        char szName[30];
    public:
        int salary;
        void setName(char *name);
        void getName(char *name);
        void averageSalary(CEmployee e1, CEmployee e2);
};

void CEmployee::setName(char *name){
    strcpy(szName, name);//OK
}

void CEmployee::getName(char *name){
    strcpy(name, szName);//OK 
}

void CEmployee::averageSalary(CEmployee e1, CEmployee e2){
    salary = (e1.salary + e2.salary)/2;
}

int main(){
    CEmployee e;
    // strcpy(e.szName, "Tom134567890");
    e.setName("Tom");
    e.salary = 5000;
    cout<<e.salary<<endl;
    return 0;
}
