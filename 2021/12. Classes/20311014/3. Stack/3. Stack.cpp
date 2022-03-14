#include <iostream>
using namespace std;

class Stack
{
    private:
        int key;
        Stack* next;
    public:
        void push(int x);
        int pop();
        Stack* top = NULL;
};

void Stack::push(int x)
{
    Stack* p = new Stack;
    p->key = x;
    p->next = top;
    top = p;
}

int Stack::pop()
{
    if (!top)
    {
        cout << "Stack is empty!" << endl;
        return NULL;
    }
    Stack* p = top;
    int x = p->key;
    top = p->next;
    delete p;
    return x;
}

int main()
{
    int x;
    Stack phone;

    cout << "Enter phone numbers (press a random letter to finish): " << endl;
    while (cin >> x) phone.push(x);

    while (phone.top) cout << phone.pop() << " ";
    cout << endl;

    return 0;
}