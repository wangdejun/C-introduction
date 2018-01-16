#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class CStudent
{
    private:
        string name;
        string id;
        char gender;
        int age;
    public:
        void PrintInfo();
        void SetInfo(const string & name_, const string & id_, int age_, char gender_);
        string GetName(){
            return name;
        }
};

//CUndergraduateStudent class inherits from the CStudent base class
class CUndergraduateStudent : public CStudent
{
    private:
        //the Deparment(系) name {String} that the student belongs to
        string department;
    public:
        void QualifiedForBaoyan(){
            cout<<"qualified for baoyan"<<endl;
        }
        void PrintInfo(){
            //call the member function PrintInfo in CStudent class
            CStudent::PrintInfo();
            cout<<"Department"<<department<<endl;
        }
        void SetInfo(const string & name_, const string & id_, int age_, char gender_, const string & department_){
            //call the function in the CStudent base class
            //making the CUndergraduate subclass inherits functions in the CStudent Class;
            CStudent::SetInfo(name_, id_, age_, gender_);
            department = department_;
        }
};

int main()
{
    CUndergraduateStudent s2;
    s2.SetInfo("WangDejun", "111111111", 29, 'M', "ComputerScience");
    cout<<s2.GetName()<<" ";
    s2.QualifiedForBaoyan();
    s2.PrintInfo();
    return 0;
}

/**
 * Cannot figure out the reason
[Running] cd "/Users/wangdejun/LE/C++/C++/CourseraPekingU/" && g++ students.cpp -o students && "/Users/wangdejun/LE/C++/C++/CourseraPekingU/"students
Undefined symbols for architecture x86_64:
  "CStudent::SetInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, char)", referenced from:
      CUndergraduateStudent::SetInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) in students-f31506.o
  "CStudent::PrintInfo()", referenced from:
      CUndergraduateStudent::PrintInfo() in students-f31506.o
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
*/