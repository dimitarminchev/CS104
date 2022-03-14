#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    cout << "Stack:" << endl << "112 911 166" << endl;
    stack<int> s;
    s.push(112);
    s.push(911);
    s.push(166);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl << endl;

    cout << "Queue:" << endl << "112 911 166" << endl;
    queue<int> q;
    q.push(112);
    q.push(911);
    q.push(166);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}