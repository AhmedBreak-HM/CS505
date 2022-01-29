#pragma once
#include "Node.h"
class BinaryTree
{
private:
	Node node;
	Node* root = nullptr;

public:

	void Add(int value);
	void AddHelper(Node* temp, int  value);
	void AddRecursion(int  value);

};

