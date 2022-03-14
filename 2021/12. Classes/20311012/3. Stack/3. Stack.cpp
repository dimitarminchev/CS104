#include <iostream>
using namespace std;

// Стек
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
// Добавяне на елемент към стека
void stack::push(int x)
{
    stack* p = new stack;
    p->key = x;
    p->next = top;
    top = p;
}
// Изваждане на елемент от стека
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
// Главна програма
int main()
{
    int x;
    stack phone;

    // Въвеждане на елементи в стека
    cout << "Please enter some phone numbers and press letter to finish:" << endl;
    while (cin >> x) phone.push(x);

    // Отпечатване на елементите от стека
    while (phone.top) cout << phone.pop() << " ";
    cout << endl;

    return 0;
}
