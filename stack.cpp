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