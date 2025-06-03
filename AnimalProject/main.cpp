#include "main.h"

class A {
public:
	virtual void show() {
		cout << "class A" << endl;
	}
};

class B : public A {
public:
	void show() override {
		cout << "class B" << endl;
	}
};

class C : public A { 
	void show() override {
		cout << "class C" << endl;
	}
};
class D : public C {
	void show() override {
		cout << "class D" << endl;
	}
};

// динамический полиморфизм (dynamic polymorphism)
// позднее связывание (dynamic binding)
// переопределение (overriding)

int main() {
	A* a = new A();
	a->show();
	delete a;

	a = new B();
	a->show();
	
	a = new C();
	a->show();
	
	a = new D();
	a->show();

	return 0;
}