#include <stdio.h>

class String{
    private:
        char *str;
    public:
        String():str(NULL){}
        const char * c_str(){
            return str;
        }
        char * operator = (const char * s);
        ~String();
};