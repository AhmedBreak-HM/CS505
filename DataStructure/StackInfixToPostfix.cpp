#include "StackInfixToPostfix.h"
#include<stack>

string StackInfixToPostfix::ConvertInfixToPostfix(string exp)
{
	stack<char> stk;
	string output = "";
	for (int i = 0; i < exp.length(); i++) {
		if (exp[i] == ' ') continue;
		if (isdigit(exp[i]) || isalpha(exp[i])) output += exp[i];
		else if (exp[i] == '(') stk.push(exp[i]);
		else if (exp[i] == ')') {
			while (stk.top() != '(') {
				output += stk.top();
				stk.pop();
			}
			stk.pop(); // remove '('
		}
		else {
			while (!stk.empty() && Priorty(exp[i]) <= Priorty(stk.top())) {
				output += stk.top();
				stk.pop();
			}
			// add operatopr
			stk.push(exp[i]);
		}
		while (!stk.empty()) {
			output += stk.top();
			stk.pop();
		}
	}
	return output;
}

int StackInfixToPostfix::Priorty(char c)
{
	if (c == '+' || c == '-') return 1;
	else if (c == '*' || c == '/') return 2;
	else if (c == '^') return 3;
	return 0;
}
