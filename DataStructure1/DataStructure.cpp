#include <iostream>
#include "Stack.h"
#include "StackApplication.h"
#include "StackInfixToPostfix.h"

#include<string>
#include<stack>
using namespace std;
int main()
{
	// Casting Infix to Prefix Using Stack

	try
	{
		string InfixExpressions = ("(3+2)+7/2*((7+3)*2)");
		StackInfixToPostfix stk;

		string output = stk.ConvertInfixToPostfix(InfixExpressions);
		cout << output << endl;

	}
	catch (const std::exception&)
	{

	}









	// -------------------------------------

	// Test Stack--------------
	//Stack s;
	//cout << s.IsEmpty() << endl;
	//cout << "Hello World!\n";
	//s.Push(1);
	//s.Push(2);
	//s.Push(3);
	//s.Push(4);
	//s.Push(5);
	//s.LoadArray();


	//StackApplication stack;
	//string exp;
	//cin >> exp;
	//if (stack.IsBalanced(exp))cout << "Is Balanced" << endl;
	//else cout << "Not Balanced" << endl;
	return 0;
}



