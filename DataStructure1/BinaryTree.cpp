#include "BinaryTree.h"



void BinaryTree::Add(int value)
{
	if (root == nullptr)
		root = new Node(value);
	return;
	Node* temp = root;
	Node* parent = nullptr;
	while (temp != nullptr) {
		parent = temp;
		if (value <= temp->Data) {
			temp = temp->Left;
		}
		else {
			temp = temp->Right;
		}
		if (value <= parent->Data) {
			parent->Left = new Node(value);
		}
		else
		{
			parent->Right = new Node(value);
		}


	}
}

void BinaryTree::AddHelper(Node* temp, int value)
{
	Node* parent = temp;
	if (value <= temp->Data) {
		if (temp->Left == nullptr) {
			temp->Left = new Node(value);
		}
		else {

			AddHelper(temp->Left, value);
		}
	}
	else {
		if (temp->Right == nullptr) {
			temp->Right = new Node(value);
		}
		else {
			AddHelper(temp->Right, value);
		}

	}
}



void BinaryTree::AddRecursion(int value)
{
	if (root == nullptr) {
		root = new Node(value);
	}
	else {
		AddHelper(root, value);
	}
}
