#include "Transport.h"
#include "GasStation.h"
#include "Plane.h"
#include "Car.h"
#include "Truck.h"
#include "Bus.h"

int main() {
	int size = 8;

	Transport** transports = new Transport*[size]{
		new Car(40), new Car(50), new Car(60),
		new Truck(450), new Truck(500),
		new Bus(900), new Plane(3000), new Plane(5000)
	};
		
	//Plane planes[plane_size]{ Plane(1000), Plane(1500) };
	
	GasStation station;

	cout << "Total gas: " << station.calculateTotalGas(transports, size) << endl;
	cout << "All info:\n" << station.getAllInfo(transports, size) << endl;


	return 0;
}