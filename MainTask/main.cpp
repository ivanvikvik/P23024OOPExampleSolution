#include "Student.h"

int main() {
	Student* st1 = nullptr;
	Student* st2 = nullptr;

	st1 = new Student[10];
	st1[0]

	st1->name = "Veronika";
	st1->age = 14;
	st1->mark = 9.2;
	st1->alive = true;

	st2 = st1;
	
	cout << "Before: " << endl;
	cout << st1->getString() << endl;
	cout << st2->getString() << endl;

	st1 = st2;
	st1->name = "Bogdan";

	cout << "After: " << endl;
	cout << st1->getString() << endl;
	cout << st2->getString() << endl;

	return 0;
}