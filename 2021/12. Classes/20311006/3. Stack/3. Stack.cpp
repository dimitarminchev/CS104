#include <iostream>
using namespace std;

class stack
{
private:
    int key;
    stack* next;
public:

    void push(int x);
    int pop();
    stack* top = NULL;
};

void stack::push(int x)
{
    stack* p = new stack;
    p->key = x;
    p->next = top;
    top = p;
}

int stack::pop()
{
    if (!top)
    {
        cout << "Empty!" << endl;
        return NULL;
    }
    stack* p = top;
    int x = p->key;
    top = p->next;
    delete p;
    return x;
}

int main()
{
    int x;
    stack phone;

    cout << "Please enter some phone numbers and press letter to finish:" << endl;
    while (cin >> x) phone.push(x);

    while (phone.top) cout << phone.pop() << " ";
    cout << endl;

    return 0;
}