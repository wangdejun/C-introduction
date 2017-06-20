template <Class T> class Queue{
public:
    void clear();//clear the queue;
    bool enQueue(const T item);//item插入队列尾部，成功则返回真，否则返回false
    bool deQueue(T & item);
    bool getFront(T & item);//return the front item, return true or false;
    bool isEmpty();//return true if the queue is empty
    bool isFull();//return true if the queue is full
}