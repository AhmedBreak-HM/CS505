#pragma once
#include <string>
using namespace std;
class Car
{
private:
	string name;
	int model;
	string maker;

public:
	string GetName();
	void SetName(string nam);
	int GetModel();
	void SetModel(int mod);
	string GetMaker();
	void SetMaker(string mak);


	Car();
	Car(string nam, int mod, string mak);
	~Car();


};

