#include "Transport.h"

class Plane : public Transport {
public:
	Plane() {}
	Plane(int tank) : Transport(tank) {}

	string toString() override {
		return "\nPlane";
	}
};