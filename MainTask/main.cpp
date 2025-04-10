#include "Student.h"

int main() {
	//int array[10]{ 1,2,3 };

	Student student1{};

	cout << "Before:\n";
	cout << student1.toString() << endl;

	student1.name = "Alex";
	student1.age = 14;
	student1.mark = 8.9;
	student1.alive = true;

	cout << "After:\n";
	cout << student1.toString() << endl;


	return 0;
}