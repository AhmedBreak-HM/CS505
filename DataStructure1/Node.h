#pragma once
class Node
{
public:
	int Data;
	Node* Left;
	Node* Right;
	Node(int value)
	{
		Data = value;
		Left = nullptr;
		Right = nullptr;
	}
};

