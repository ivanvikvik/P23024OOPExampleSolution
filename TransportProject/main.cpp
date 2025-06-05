#include "GasStation.h"
#include <iostream>
using namespace std;

int main() {
	const int car_size = 3;
	const int truck_size = 2;
	const int bus_size = 1;

	Car cars[car_size]{ Car(40), Car(50), Car(60) };
	Truck trucks[truck_size]{ Truck(500), Truck(450) };
	Bus buses[bus_size]{ Bus(400) };
	
	GasStation station;

	cout << "Total gas: " << station.calculateTotalGas(cars, car_size,
		trucks, truck_size, buses, bus_size) << endl;

	return 0;
}