#pragma once
#include "Transport.h"

class Bus : public Transport
{
public:
	//...
	Bus() {}
	Bus(int tank) : Transport(tank) {}

	string toString() override {
		return "\nBus";
	}
};

