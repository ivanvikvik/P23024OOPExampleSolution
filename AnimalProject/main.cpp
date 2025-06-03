#include "SoundStudio.h"
#include "Cat.h"
#include "Dog.h"
#include "Crocodile.h"

// ������������ ����������� (dynamic polymorphism)
// ������� ���������� (dynamic binding)
// ��������������� (overriding)

int main() {
	SoundStudio studio;

	Dog* dog = new Dog("Laika");
	Cat* cat = new Cat("Adel");
	Crocodile* crocodile = new Crocodile("Pushok");

	int size = 5;
	Animal** animals = new Animal * [size] {dog, cat, crocodile, dog, cat};

	studio.makeItSound(animals, size);
	
	return 0;
}