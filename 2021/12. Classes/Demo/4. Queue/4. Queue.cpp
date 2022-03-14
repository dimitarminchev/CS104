#include <iostream>
using namespace std;

// Опашка
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
// Добавяне на елемент към опашата
void queue::enqueue(int x)
{
    queue* p = new queue;
    p->key = x;
    p->next = NULL;
    if (last == NULL) last = p;
    else first->next = p;
    first = p;
}
// Премахване на елемент от опашката
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
// Главна функция на програмата
int main()
{
    int x;
    queue phone;

    // Добавяне на елементи към опашката
    cout << "Please enter some phone numbers and press letter to finish:" << endl;
    while (cin >> x) phone.enqueue(x);

    // Опечатване на елементите от опашката
    while (phone.last) cout << phone.dequeue() << " ";
    cout << endl;

    return 0;
}
