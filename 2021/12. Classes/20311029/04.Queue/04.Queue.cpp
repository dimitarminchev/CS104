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
	Queue* queue = new Queue;

	queue->key = x;
	queue->next = NULL;

	if (last == NULL)
	{
		last = queue;
	}
	else
	{
		first->next = queue;
	}

	first = queue;
}

int Queue::dequeue()
{
	if (last)
	{
		Queue* queue = last;

		int x = queue->key;
		last = queue->next;

		delete queue;

		return x;
	}
	return NULL;
}

int main()
{
	int x;
	Queue phone;

	cout << "Please enter some phone numbers and press letter to finish:" << endl;
	while (cin >> x) phone.enqueue(x);

	while (phone.last)
	{
		cout << phone.dequeue() << " ";
	}
	cout << endl;

	return 0;
}