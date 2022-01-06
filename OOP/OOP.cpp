// OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
	Car car = Car("honda", 2000, "Jaban");
	int model = car.GetModel();
	cout << "name :" + car.GetName() << endl;
	cout << model << endl;
	cout << "maker :" + car.GetMaker() << endl;

}

