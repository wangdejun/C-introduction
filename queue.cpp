
template <class T> 
class Queue{
public:
    void clear();//clear the queue;
    bool enQueue(const T item);//item插入队列尾部，成功则返回真，否则返回false
    bool deQueue(T & item);
    bool getFront(T & item);//return the front item, return true or false;
    bool isEmpty();//return true if the queue is empty
    bool isFull();//return true if the queue is full
};

//顺序队列的实现
class arrQueue: public Queue<T>{
    private:
        int mSize;
        int front;
        int rear;
        T * qu;     //队列运算集
    public:
        arrQueue(int size);//创建该队列的实例
        ~arrQueue();       //消除该队列，并释放其空间；
}