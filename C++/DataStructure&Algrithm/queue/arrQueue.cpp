#include <iostream>
#include "queue"
#include <stdio.h>
using namespace std;

template <class T> class Queue{
    public:
        void clear();
        bool enQueue(const T item);

        bool deQueue(T & item);
        bool getFront(T & item);

        bool isEmpty();
        bool isFull();
};

// arr queue implementation
class arrQueue: public Queue <T> {
    private:
        int mSize;
        int front;
        int rear;
        T * qu;

    public:
        arrQueue(int size);
        ~arrQueue();
};

template <class Elem> class Aqueue: public Queue<Elem> {
    private:
        int size;   // maxsize of the queue
        int front;  // head of the queue [a pointer]
        int rear;   // rear of the queue
        Elem *listArray; //存储元素的数组；
    
    public:
        Aqueue(int sz = defaultListSize){
            size = sz + 1;
            rear = 0;
            front = 1;
            listArray = new Elem[size];
        }
        ~Aqueue(){
            delete [] listArray;
        }
        void clear(){
            front = rear + 1;
        };
};


// enqueue function
bool enqueue(const Elem & it){
    if(((rear+2) % size)==front)
        return false;
    rear = (rear+1)%size;
    listArray[rear] = it;
    //enqueue successfully
    return true;
}
// dequeue function
bool dequeue(Elem & it){
    if(length()==0)
        return false;
    // dequeue firstly ,and move the front
    it = listArray[front]
    front = (front + 1) % size;
    return true;
}

bool frontValue(Elem& it) const{
    //如果队列为空，那么frontValue operation 失败
    if(length()==0)
        return false;
    it = listArray[front];
    return true;
}

int length()const{
    return (size + (rear  - front + 1) % size);
}

