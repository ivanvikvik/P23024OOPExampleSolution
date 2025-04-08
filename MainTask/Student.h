#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	// fields
	string name;
	int age;
	double mark;
	bool alive;

	// methods
	string getString() {
		string s = "Name: " + name;
		s += ", age: " + to_string(age);
		s += ", average mark: " + to_string(mark);
		s += ", alive: ";
		s += alive ? "yes" : "no";
		return s;
	}

};