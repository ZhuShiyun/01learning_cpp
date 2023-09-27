//
// Created by b-zhushiyun on 23-9-27.
//
/**
 * 顺序栈 https://baike.baidu.com/item/%E6%A0%88/12808149?fromModule=lemma_search-box
 */
#include <iostream>
using namespace std;

class SqStack
{
private:
    enum { MaxSize = 100 };
    int data[MaxSize];
    int top;
public:
    SqStack();
    ~SqStack();
    bool isEmpty();
    void pushint(int x);
    int popint();
    int getTop();
    void display();
};
SqStack::SqStack()
{
    top = -1;
}
SqStack::~SqStack() {}
bool SqStack::isEmpty() //判断栈为空
{
    return(top == -1);
}
void SqStack::pushint(int x)//元素进栈
{
    if (top == MaxSize - 1)
    {
        cout << "栈上溢出！" << endl;
    }
    else
    {
        ++top;
        data[top] = x;
    }
}
int SqStack::popint()//退栈
{
    int tmp = 0;
    if (top == -1)
    {
        cout << "栈已空！" <<endl;
    }
    else
    {
        tmp = data[top--];
    }
    return tmp;
}
int SqStack::getTop()//获得栈顶元素
{
    int tmp = 0;
    if (top == -1)
    {
        cout << "栈空！" << endl;
    }
    else
    {
        tmp = data[top];
    }
    return tmp;
}
void SqStack::display()//打印栈里元素
{
    cout << "栈中元素：" << endl;
    for (int index = top; index >= 0; --index)
    {
        cout << data[index] << endl;
    }
}
int main()
{
    SqStack st;
    cout << "栈空：" << st.isEmpty() << endl;
    for (int i = 1; i < 10; i++)
    {
        st.pushint(i);
    }
    st.display();
    cout << "退一次栈" << endl;
    st.popint();
    cout << "栈顶元素:" << st.getTop() << endl;
    st.popint();
    st.display();
    return 0;
}
