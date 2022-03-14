#include <iostream>

using namespace std;

class Stack
{
private:
	int value;
	Stack* nextValue;

	int len = -1;

public:
	void push(int a);
	int pop();
	int lenght();

	Stack* top = NULL;
};

void Stack::push(int a)
{
	Stack* stack = new Stack;

	stack->value = a;
	stack->nextValue = top;

	if (stack->nextValue)
	{
		stack->len = stack->nextValue->len + 1;
	}
	else
	{
		stack->len = 0;
	}

	top = stack;
}

int Stack::pop()
{

	if (top)
	{
		Stack* stack = top;
		int value = stack->value;

		top = stack->nextValue;

		if (stack->nextValue)
		{
			stack->len = stack->nextValue->len - 1;
		}

		delete stack;

		return value;
	}

	return NULL;
}

int Stack::lenght()
{
	if (top)
	{
		Stack* stack = top;

		return stack->len + 1;
	}

	return NULL;
}

int main()
{
	Stack theStack;

	theStack.push(1);
	theStack.push(2);
	theStack.push(3);

	cout << "Lenght: " << theStack.lenght() << endl;

	for (int i = theStack.lenght(); i >= 0; i--)
	{
		cout << theStack.pop() << " ";
	}
}
