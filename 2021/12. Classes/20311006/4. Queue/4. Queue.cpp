#include <iostream>
using namespace std;

class queue
{
private:
    int key;
    queue* next;

public:
    void enqueue(int x);
    int dequeue();
    queue* first = NULL, * last = NULL;
};

void queue::enqueue(int x)
{
    queue* p = new queue;
    p->key = x;
    p->next = NULL;
    if (last == NULL) last = p;
    else first->next = p;
    first = p;
}

int queue::dequeue()
{
    if (last == NULL)
    {
        cout << "Empty!" << endl;
        return NULL;
    }
    queue* p = last;
    int x = p->key;
    last = p->next;
    delete p;
    return x;
}

int main()
{
    int x;
    queue phone;

    cout << "Please enter some phone numbers and press letter to finish:" << endl;
    while (cin >> x) phone.enqueue(x);

    while (phone.last) cout << phone.dequeue() << " ";
    cout << endl;

    return 0;
}