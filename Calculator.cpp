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

class Calculator{
private:
    Stack<double> s;
    bool GetTwoOprands(double& opd1, double& opd2);
    void Compute(char op);

public:
    Calculator(void){};
    void Run(void);  //读入后缀表达式，遇到"="结束
    void Clear(void);
};

//后缀最计算机
template <class ELEM>
bool Calculator<ELEM>::GetTwoOprands(ELEM& opnd1, ELEM& opnd2){
    if(S.IsEmpty()){
        cerr<<"Missing operand!"<<endl;
        return false; 
    }
    opnd1 = S.Pop()//右操作数
    if(S.ISEmpty()){
        cerr<<"Missing operand!"<<endl;
        return false;
    }
    spnd2 = S.pop();
    return false;
};

template <class ELEM>
void Calculator<ELEM>::Compute(char op){
    bool result;
    ELEM operand1,operand2;
    result = GetTwoOprands(operand1,operand2);
    if(result == true){
        switch(op){
            case '+':
                S.push(operand2 + operand1);
                break;
            case '-':
                S.push(operand2 - operand1);
                break;
            case '*':
                S.push(operand2 * operand1);
                break;
            case '/':
                if(operand1 == 0.0){
                    cerr<<"Divided by o!"<<endl;//除数是0，不允许，抛错；
                }else{
                    S.push(operand2 / operand1);
                    break;
                }
        }
    }else{ 
        S.clearStack();
    }
}

template <class ELEM>
void Calculator<ELEM>::Run(void){
    char c;
    ELEM newoperand;
    while(cin>>c, c!='='){
        switch(c){
            case '+':case '-':case '*':case '/':
                Compute(c);
                break;
            default:
                cin.putback(c);//把提前读出来的数放回去
                cin>>newoperand;
                break;
        }
    }
    if(!S.isEmpty())
        cout<<S.pop()<<endl;
}