#include <iostream>
using namespace std;

// 1. Queue
class Queue
{
private:
    int key;
    Queue* next;
public:
    void enqueue(int x);
    int dequeue();
    Queue* first = NULL, * last = NULL;
};
void Queue::enqueue(int x)
{
    Queue* p = new Queue;
    p->key = x;
    p->next = NULL;
    if (last == NULL) last = p;
    else first->next = p;
    first = p;
}
int Queue::dequeue()
{
    if (last == NULL)
    {
        cout << "Empty!" << endl;
        return 0; // Magic happens here!
    }
    Queue* p = last;
    int x = p->key;
    last = p->next;
    delete p;
    return x;
}

// Stack
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
        cout << "Empty!" << endl;
        return 0;
    }
    Stack* p = top;
    int x = p->key;
    top = p->next;
    delete p;
    return x;
}

// 3. Solution
int main()
{
    int n, next;
    Queue even;
    Stack odd;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> next;
        if (next % 2 == 0) even.enqueue(next);
        else odd.push(next);
    }

    // even
    while (even.last != NULL) cout << even.dequeue() << " ";
    //odd
    while (odd.top != NULL) cout << odd.pop() << " ";
    cout << endl;

    return 0;
}