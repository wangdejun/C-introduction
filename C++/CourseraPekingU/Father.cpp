class Father{
    private:
        int nPrivate;
    public:
        int nPublic;
    protected:
        int nProtected;
};

class Son:: public Father{
    void AccessFather(){
        nPublic = 1;//OK 
        nPrivate = 1;//wrong
        nProtected = 1;//
        Son f;
        f.nProtected = 1;//wrong
    }
};

int main(){
    Father f;
    Son s;
    f.nPublic = 1;
    s.nPublic = 1;
}   