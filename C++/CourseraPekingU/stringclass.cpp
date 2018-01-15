#include <stdio.h>
#include <iostream>
using namespace std;
//String class
class String{
    private:
        char *str;
    public:
        String():str(NULL){}
        const char * c_str(){
            return str;
        }//返回值为const类型，不能通过指针修改指针所指向的内容
        char * operator = (const char * s);
        ~String();
};

//override
/*
char * String::operator=(const char * s){
    if(str)
        delete [] str;
    if(s){//s is NULL ,anc canbe execute the copy behavior
        str = new char[strlen(s)+1];//new a block of memory
        strcpy(str, s);
    }else{
        str = NULL;
    }
    return str;
}
*/
//deep copy String Class meber function
String & String::operator= (const String & s){
    if(str==s.str)
        return * this;
    if(str)
        delete [] str;
    if(s.str){
        str = new char[strlen(s.str)+1];
        strcpy(str, s.str);
    }else{
        str = NULL;
    }
    return * this;//返回指针
}

String::~String(){
    //不为空的时候，delete the pointer;
    if(str)
        delete [] str;
};

int main(){
    String s;
    s = "Good Luck";
    cout<<s.c_str()<<endl;
    s="Shenzhou8";
    cout<<s.c_str()<<endl;
    return 0;
}