template <class T>
class Stack{
public:
    void clear();
    bool push(const T item);
    bool pop(T& item);//返回栈顶内容并弹出
    bool top(T& item);//返回栈顶元素但是不弹出，成功则返回真，否则假
    bool isEmpty();
    bool isFull();
};

template <class T> 
class arrStack : public Stack <T>{
private:
    int mSize;              //顺序栈最多可以存放的元素个数
    int top;                //栈顶位置，应小于mSize
    T *st;                  //存放栈元素的数组

public:
    arrStack(int size){     //创建一个给定长度顺序栈的实例
        mSize = size;
        top = -1;
        st = new T[mSize];
    }
    arrStack(){             //创建一个顺序栈的实例
        top = -1;
    }
    ~arrStack(){
        top = -1;
    }
    void clear(){
        top = -1;//清空栈
    }
}


bool arrStack::push(const T item){
    if(top==mSize-1){
        cout<<"stack is full"<<endl;
        return false;
    }else{
        st[++top] = item;
        return true;
    }
}

bool arrStack<>