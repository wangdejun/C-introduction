/**
 * Link implementation of the Queue
 * 
 **/
template <class T>
class lnkQueue: public Queue<T>{
    private:
        int size;
        Link<T> *front;
        Link<T> *rear;

    public:
        lnkQueue(int size);
        ~lnkQueue();
};
