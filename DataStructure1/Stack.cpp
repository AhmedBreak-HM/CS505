#include "Stack.h"
#include <iostream>
using namespace std;

void Stack::Push(int value)
{
	if (top == 99)return;
	top++;
	arr[top] = value;
}

void Stack::pop()
{
	if (IsEmpty()) return;
	top--;
}

bool Stack::IsEmpty()
{
	return top == -1;
}

int Stack::Top()
{
	return arr[top];
}



void Stack::LoadArray()
{
	while (!IsEmpty())
	{
		cout << arr[top] << endl;
		pop();
	}
}
