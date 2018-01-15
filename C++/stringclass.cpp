#include <stdio.h>

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