#pragma once
class Stack
{
private:
	int size;
	int arr[100];
public:
	int top = -1;
	void Push(int value);
	void pop();
	bool IsEmpty();
	int Top();
	void LoadArray();

};

