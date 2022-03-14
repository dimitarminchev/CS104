#include <iostream>
using namespace std;

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
        return NULL;
    }
    Queue* p = last;
    int x = p->key;
    last = p->next;
    delete p;
    return x;
}

int main()
{
    int x;
    Queue phone;

    cout << "Enter phone numbers (press a random letter to finish): " << endl;
    while (cin >> x) phone.enqueue(x);

    while (phone.last) cout << phone.dequeue() << " ";
    cout << endl;

    return 0;
}