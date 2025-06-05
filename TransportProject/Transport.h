#pragma once
#include <iostream>
#include <string>
using namespace std;

class Transport
{
public:
	int tank;

	Transport() : tank(0){}
	Transport(int tank) : tank(tank) {}

	virtual string toString() = 0;
};

