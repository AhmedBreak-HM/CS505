#include "StackApplication.h"
#include "Stack.h"

bool StackApplication::IsBalanced(string expresion)
{
	Stack openbrackets;
	for (int i = 0; i < expresion.length(); i++) {
		if (expresion[i] == '(' || expresion[i] == '{' || expresion[i] == '[') {
			openbrackets.Push(expresion[i]);

		}
		else if (expresion[i] == ')' || expresion[i] == '}' || expresion[i] == ']') {
			if (openbrackets.IsEmpty()) return false;
			else if (IsMatch(openbrackets.Top(), expresion[i]) == false) return false;
			openbrackets.pop();
		}

	}
	return openbrackets.IsEmpty();
}

bool StackApplication::IsMatch(char open, char close)
{
	if (open == '(' && close == ')') return true;
	else if (open == '{' && close == '}') return true;
	else if (open == '[' && close == ']') return true;
	return false;
}
