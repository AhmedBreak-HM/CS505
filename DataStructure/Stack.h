#pragma once
class Stack
{
private:
	int top = -1;
	int size;
	int arr[100];
public:
	void Push(int value);
	void pop();
	bool IsEmpty();
	int Top();
	void LoadArray();

};

