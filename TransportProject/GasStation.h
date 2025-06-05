#pragma once
#include "Transport.h"

class GasStation
{
public:
	//...
	int calculateTotalGas(Transport** transports, int size) {
		
		int total = 0;

		for (int i = 0; i < size; i++)
		{
			total += transports[i]->tank;
		}
	
		return total;
	}

	string getAllInfo(Transport** transports, int size) {
		string s = "";

		for (int i = 0; i < size; i++)
		{
			s += transports[i]->toString();

		}

		return s;
	}
};

