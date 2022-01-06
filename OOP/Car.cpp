#include "Car.h"
Car::Car() {}
Car::Car(string nam, int mod, string mak) {
	name = nam;
	model = mod;
	maker = mak;
}
Car::~Car() {}
string Car::GetName() {
	return name;
}

void Car::SetName(string nam) {
	name = nam;
}

int Car::GetModel() {
	return model;
}
void Car::SetModel(int mod) {
	model = mod;
}

string Car::GetMaker() {
	return maker;
}
void Car::SetMaker(string mak) {
	maker = mak;
}