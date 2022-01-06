#include <iostream>
#include "Stack.h"
#include "StackApplication.h"
#include<string>
using namespace std;
int main()
{
	Stack s;
	cout << s.IsEmpty() << endl;
	cout << "Hello World!\n";
	s.Push(1);
	s.Push(2);
	s.Push(3);
	s.Push(4);
	s.Push(5);
	s.LoadArray();


	StackApplication stack;
	string exp;
	cin >> exp;
	if (stack.IsBalanced(exp))cout << "Is Balanced" << endl;
	else cout << "Not Balanced" << endl;


	return 0;
}



