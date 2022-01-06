

#include <iostream>
#include "Stack.h"
using namespace std;
int main()
{
	Stack s;
	cout << s.IsEmpty() << endl;
	s.Push(1);
	s.Push(2);
	s.Push(3);
	s.Push(4);
	s.Push(5);
	s.LoadArray();

	cout << "Hello World!\n";
}

