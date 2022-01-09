#pragma once
#include <string>
using namespace std;
class StackInfixToPostfix
{
public:
	string ConvertInfixToPostfix(string exp);
	int Priorty(char c);
};

