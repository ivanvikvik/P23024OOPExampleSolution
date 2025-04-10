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

	// constructors

	// default-constructors or constructors without arguments
	Student() {
		cout << "default-constructor..." << endl;
		name = "no name";
		age = 13;
		mark = 4.0;
		alive = true;
	}

	// methods
	string toString() {
		string s = "Name: " + name;
		s += ", age: " + to_string(age);
		s += ", average mark: " + to_string(mark);
		s += ", alive: ";
		s += alive ? "yes" : "no";
		return s;
	}

};